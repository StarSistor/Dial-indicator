
#define CLOCK_PIN_A 2
#define DATA_PIN_A  3

#define CLOCK_PIN_B 4
#define DATA_PIN_B 5

#define CLOCK_PIN_C 6
#define DATA_PIN_C 7

#define CLOCK_PIN_D 8
#define DATA_PIN_D 9

#define CLOCK_PIN_E 10
#define DATA_PIN_E 11

#define CLOCK_PIN_F 12
#define DATA_PIN_F 13

#define CLOCK_PIN_G A1
#define DATA_PIN_G A2

#define CLOCK_PIN_H A3
#define DATA_PIN_H A4

#define CLOCK_PIN_I A5
#define DATA_PIN_I A6

void setup() 
{
  Serial.begin(9600);  
  pinMode(CLOCK_PIN_A, INPUT);
  pinMode(DATA_PIN_A, INPUT);

  pinMode(CLOCK_PIN_B, INPUT);
  pinMode(DATA_PIN_B, INPUT);

  pinMode(CLOCK_PIN_C, INPUT);
  pinMode(DATA_PIN_C, INPUT);

  pinMode(CLOCK_PIN_D, INPUT);
  pinMode(DATA_PIN_D, INPUT);

  pinMode(CLOCK_PIN_E, INPUT);
  pinMode(DATA_PIN_E, INPUT);

  pinMode(CLOCK_PIN_F, INPUT);
  pinMode(DATA_PIN_F, INPUT);

  pinMode(CLOCK_PIN_G, INPUT);
  pinMode(DATA_PIN_G, INPUT);

  pinMode(CLOCK_PIN_H, INPUT);
  pinMode(DATA_PIN_H, INPUT);

  pinMode(CLOCK_PIN_I, INPUT);
  pinMode(DATA_PIN_I, INPUT);
}
//////////////////////////////////////////////////////////////
char buf_A[20];
unsigned long tmpTime_A;
float result_A;
bool mm_A = true; 

char buf_B[20];
unsigned long tmpTime_B;
float result_B;
bool mm_B = true; 

char buf_C[20];
unsigned long tmpTime_C;
float result_C;
bool mm_C = true; 

char buf_D[20];
unsigned long tmpTime_D;
float result_D;
bool mm_D = true; 

char buf_E[20];
unsigned long tmpTime_E;
float result_E;
bool mm_E = true; 

char buf_F[20];
unsigned long tmpTime_F;
float result_F;
bool mm_F = true; 

char buf_G[20];
unsigned long tmpTime_G;
float result_G;
bool mm_G = true; 

char buf_H[20];
unsigned long tmpTime_H;
float result_H;
bool mm_H = true; 

char buf_I[20];
unsigned long tmpTime_I;
float result_I;
bool mm_I = true; 

////////////////////////////////////////////////////////////// hasta aqui

void loop()
{

    while(digitalRead(CLOCK_PIN_A)==LOW) {}
  tmpTime_A=micros();
  while(digitalRead(CLOCK_PIN_A)==HIGH) {}
  if((micros()-tmpTime_A)<500) return;
  readDial_A(); 
  buf_A[0]=' ';
  dtostrf(result_A,6,3,buf_A+1); strcat(buf_A," in ");  
  dtostrf(result_A*2.54,6,3,buf_A+1); strcat(buf_A," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_B)==LOW) {}
  tmpTime_B=micros();
  while(digitalRead(CLOCK_PIN_B)==HIGH) {}
  if((micros()-tmpTime_B)<500) return;
  readDial_B(); 
  buf_B[0]=' ';
  dtostrf(result_B,6,3,buf_B+1); strcat(buf_B," in ");  
  dtostrf(result_B*2.54,6,3,buf_B+1); strcat(buf_B," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_C)==LOW) {}
  tmpTime_C=micros();
  while(digitalRead(CLOCK_PIN_C)==HIGH) {}
  if((micros()-tmpTime_C)<500) return;
  readDial_C(); 
  buf_C[0]=' ';
  dtostrf(result_C,6,3,buf_C+1); strcat(buf_C," in ");  
  dtostrf(result_C*2.54,6,3,buf_C+1); strcat(buf_C," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_D)==LOW) {}
  tmpTime_D=micros();
  while(digitalRead(CLOCK_PIN_D)==HIGH) {}
  if((micros()-tmpTime_D)<500) return;
  readDial_D(); 
  buf_D[0]=' ';
  dtostrf(result_D,6,3,buf_D+1); strcat(buf_D," in ");  
  dtostrf(result_D*2.54,6,3,buf_D+1); strcat(buf_D," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_E)==LOW) {}
  tmpTime_E=micros();
  while(digitalRead(CLOCK_PIN_E)==HIGH) {}
  if((micros()-tmpTime_E)<500) return;
  readDial_E(); 
  buf_E[0]=' ';
  dtostrf(result_E,6,3,buf_E+1); strcat(buf_E," in ");  
  dtostrf(result_E*2.54,6,3,buf_E+1); strcat(buf_E," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_F)==LOW) {}
  tmpTime_F=micros();
  while(digitalRead(CLOCK_PIN_F)==HIGH) {}
  if((micros()-tmpTime_F)<500) return;
  readDial_F(); 
  buf_F[0]=' ';
  dtostrf(result_F,6,3,buf_F+1); strcat(buf_F," in ");  
  dtostrf(result_F*2.54,6,3,buf_F+1); strcat(buf_F," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_G)==LOW) {}
  tmpTime_G=micros();
  while(digitalRead(CLOCK_PIN_G)==HIGH) {}
  if((micros()-tmpTime_G)<500) return;
  readDial_G(); 
  buf_G[0]=' ';
  dtostrf(result_G,6,3,buf_G+1); strcat(buf_G," in ");  
  dtostrf(result_G*2.54,6,3,buf_G+1); strcat(buf_G," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_H)==LOW) {}
  tmpTime_H=micros();
  while(digitalRead(CLOCK_PIN_H)==HIGH) {}
  if((micros()-tmpTime_H)<500) return;
  readDial_H(); 
  buf_H[0]=' ';
  dtostrf(result_H,6,3,buf_H+1); strcat(buf_H," in ");  
  dtostrf(result_H*2.54,6,3,buf_H+1); strcat(buf_H," cm "); 
//--------------------------------------------------------
    while(digitalRead(CLOCK_PIN_I)==LOW) {}
  tmpTime_I=micros();
  while(digitalRead(CLOCK_PIN_I)==HIGH) {}
  if((micros()-tmpTime_I)<500) return;
  readDial_I(); 
  buf_I[0]=' ';
  dtostrf(result_I,6,3,buf_I+1); strcat(buf_I," in ");  
  dtostrf(result_I*2.54,6,3,buf_I+1); strcat(buf_I," cm "); 
//--------------------------------------------------------
  


    Serial.print(result_A,3);    
    Serial.print("\t");
    Serial.print(result_B,3);    
    Serial.print("\t");
    Serial.print(result_C,3);    
    Serial.print("\t");
    Serial.print(result_D,3);    
    Serial.print("\t");
    Serial.print(result_E,3);    
    Serial.print("\t");
    Serial.print(result_F,3);    
    Serial.print("\t");
    Serial.print(result_G,3);    
    Serial.print("\t");
    Serial.print(result_H,3);    
    Serial.print("\t");
    Serial.print(result_I,3); Serial.println(" mm");

}

void readDial_A()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_A)==LOW) {}
    while(digitalRead(CLOCK_PIN_A)==HIGH) {}
    if(digitalRead(DATA_PIN_A)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_A)
  {
    result_A=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_A=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_B()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_B)==LOW) {}
    while(digitalRead(CLOCK_PIN_B)==HIGH) {}
    if(digitalRead(DATA_PIN_B)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_B)
  {
    result_B=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_B=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_C()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_C)==LOW) {}
    while(digitalRead(CLOCK_PIN_C)==HIGH) {}
    if(digitalRead(DATA_PIN_C)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_C)
  {
    result_C=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_C=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_D()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_D)==LOW) {}
    while(digitalRead(CLOCK_PIN_D)==HIGH) {}
    if(digitalRead(DATA_PIN_D)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_D)
  {
    result_D=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_D=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_E()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_E)==LOW) {}
    while(digitalRead(CLOCK_PIN_E)==HIGH) {}
    if(digitalRead(DATA_PIN_E)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_E)
  {
    result_E=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_E=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}


void readDial_F()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_F)==LOW) {}
    while(digitalRead(CLOCK_PIN_F)==HIGH) {}
    if(digitalRead(DATA_PIN_F)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_F)
  {
    result_F=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_F=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_G()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_G)==LOW) {}
    while(digitalRead(CLOCK_PIN_G)==HIGH) {}
    if(digitalRead(DATA_PIN_G)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_G)
  {
    result_G=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_G=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}


void readDial_H()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_H)==LOW) {}
    while(digitalRead(CLOCK_PIN_H)==HIGH) {}
    if(digitalRead(DATA_PIN_H)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_H)
  {
    result_H=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_H=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}

void readDial_I()
{
  int sign=1;
  long value=0;
  int inches=0;
  for(int i=0;i<24;i++) {
    while(digitalRead(CLOCK_PIN_I)==LOW) {}
    while(digitalRead(CLOCK_PIN_I)==HIGH) {}
    if(digitalRead(DATA_PIN_I)==HIGH) {
      if(i<20) value|=(1<<i);
      if(i==20) sign=-1;
      if(i==23) inches=1; 
    }
  }
  if(mm_I)
  {
    result_I=(value*sign)/1000.0;//result=(value*sign)/1000.0;
  }
  else
  {
  result_I=(value*sign)/(inches?2000.0:100.0); //We map the values for inches, define mm to false if you want inces values
  }
  
}
