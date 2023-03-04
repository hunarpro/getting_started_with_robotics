#define m1_a D1 
#define m1_b D2 
#define m2_a D3
#define m2_b D4

int val;

void setup(){
    Serial.begin(9600);
    pinMode(m1_a, OUTPUT);
    pinMode(m1_b, OUTPUT);
    pinMode(m2_a, OUTPUT);
    pinMode(m2_b, OUTPUT);
}

void loop(){
    if (Serial.available()){
        val = Serial.read();
    }

    if (val == '1'){
        forward();
        Serial.println("Moving Forward");
    }
    if (val == '2'){
        backward();
        Serial.println("Moving Backward");
    }
    if (val == '3'){
        left();
        Serial.println("Moving Left");
    }
    if (val == '4'){
        right();
        Serial.println("Moving Right");
    }
    if (val == '5'){
        stops();
        Serial.println("Stopping");
    }
}

void forward(){
    digitalWrite(m1_a, HIGH);
    digitalWrite(m1_b, LOW);
    digitalWrite(m1_a, HIGH);
    digitalWrite(m1_b, LOW);
}

void backward(){
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, HIGH);
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, HIGH);
}

void left(){
    digitalWrite(m1_a, HIGH);
    digitalWrite(m1_b, LOW);
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, HIGH);
}

void right(){
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, HIGH);
    digitalWrite(m1_a, HIGH);
    digitalWrite(m1_b, LOW);
}

void stops(){
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, LOW);
    digitalWrite(m1_a, LOW);
    digitalWrite(m1_b, LOW);
}