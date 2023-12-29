// Este codigo emplea un pulsador para incrementar el numero de diales a leer
#define NUM_SENSORS 8

// Define pin assignments for CLOCK and DATA pins
const int CLOCK_PINS[NUM_SENSORS] = {4, 6, 8, 10, 12, A1, A3, A5};
const int DATA_PINS[NUM_SENSORS] = {3, 5, 7, 9, 11, A0, A2, A4};
const int BUTTON_PIN = 2;

char buf[NUM_SENSORS][20];
unsigned long tmpTime[NUM_SENSORS];
float result[NUM_SENSORS];
bool mm[NUM_SENSORS] = {true, true, true, true, true, true, true, true};

volatile int activeSensors = 1;
volatile bool buttonPressed = false;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 250; // Adjust debounce time as needed

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < NUM_SENSORS; i++) {
    pinMode(CLOCK_PINS[i], INPUT);
    pinMode(DATA_PINS[i], INPUT);
  }

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), buttonInterrupt, FALLING);
}

void loop() {
  if (buttonPressed) {
    activeSensors++;
    if (activeSensors > NUM_SENSORS) {
      activeSensors = 1;
    }
    buttonPressed = false;
  }

  // Read all active sensors in parallel
  readAllDials();

  for (int i = 0; i < activeSensors; i++) {
    buf[i][0] = ' ';
    dtostrf(result[i], 6, 3, buf[i] + 1);
    strcat(buf[i], " in ");
    dtostrf(result[i] * 2.54, 6, 3, buf[i] + 1);
    strcat(buf[i], " cm ");
  }

  for (int i = 0; i < activeSensors; i++) {
    Serial.print(result[i], 3);
    Serial.print("\t");
  }
  Serial.println("mm");
  delay(200);
}

void readAllDials() {
  // Read all active sensors in parallel
  for (int i = 0; i < activeSensors; i++) {
    while (digitalRead(CLOCK_PINS[i]) == LOW) {}
    tmpTime[i] = micros();
    while (digitalRead(CLOCK_PINS[i]) == HIGH) {}
    if ((micros() - tmpTime[i]) < 500) continue;
    readDial(i);
  }
}

void readDial(int sensorIndex) {
  int sign = 1;
  long value = 0;
  int inches = 0;

  for (int i = 0; i < 24; i++) {
    while (digitalRead(CLOCK_PINS[sensorIndex]) == LOW) {}
    while (digitalRead(CLOCK_PINS[sensorIndex]) == HIGH) {}
    if (digitalRead(DATA_PINS[sensorIndex]) == HIGH) {
      if (i < 20) value |= (1 << i);
      if (i == 20) sign = -1;
      if (i == 23) inches = 1;
    }
  }

  if (mm[sensorIndex]) {
    result[sensorIndex] = (value * sign) / 1000.0;
  } else {
    result[sensorIndex] = (value * sign) / (inches ? 2000.0 : 100.0);
  }
}

void buttonInterrupt() {
  unsigned long currentMillis = millis();

  if (currentMillis - lastDebounceTime >= debounceDelay) {
    buttonPressed = true;
  }
  lastDebounceTime = currentMillis;
}
