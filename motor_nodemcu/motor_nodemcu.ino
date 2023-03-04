#define m1_a D1 
#define m1_b D2 
#define m2_a D3
#define m2_b D4

void setup(){
    pinMode(m1_a, OUTPUT);
    pinMode(m1_b, OUTPUT);
    pinMode(m2_a, OUTPUT);
    pinMode(m2_b, OUTPUT);
}

void loop(){
    digitalWrite(m1_a, HIGH);
    digitalWrite(m1_b, LOW);
    digitalWrite(m2_a, HIGH);
    digitalWrite(m2_b, LOW);
    delay(1000)
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, HIGH);
    digitalWrite(m2_a, LOW);
    digitalWrite(m2_b, HIGH);
    delay(1000)
}