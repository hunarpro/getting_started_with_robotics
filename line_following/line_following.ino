#define m1_a 4  
#define m1_b 5     
#define m2_a 6      
#define m2_b 7   

int sensor= D7;
int sensorstate=0;

void setup(){
    pinMode(sensor,INPUT);
    pinMode(m1_a, OUTPUT);
    pinMode(m1_b, OUTPUT);
    pinMode(m2_a, OUTPUT);
    pinMode(m2_b, OUTPUT);
}

void loop(){
  sensorstate=digitalRead(sensor);
  if(sensorstate==HIGH){
    digitalWrite(m1_a,HIGH);
    digitalWrite(m1_b,LOW);
    digitalWrite(m2_a,LOW);
    digitalWrite(m2_b,LOW);
  }
  else{
    digitalWrite(m1_a,LOW);
    digitalWrite(m1_b,HIGH);
    digitalWrite(m2_a,LOW);
    digitalWrite(m2_b,LOW);
  }
}