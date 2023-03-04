int trigPin = 9;      
int echoPin = 10;   

#define m1_a 4  
#define m1_b 5     
#define m2_a 6      
#define m2_b 7      

long duration, distance;


void setup() {
    Serial.begin(9600);
    pinMode(m1_a, OUTPUT);
    pinMode(m1_b, OUTPUT);
    pinMode(m2_a, OUTPUT);
    pinMode(m2_b, OUTPUT);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}


void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034/2;
  Serial.print("Distance (cm): ");
  Serial.println(distance);
  delay(500);

  if (distance > 19){
    forward();
    Serial.println("Moving Forward");                                                     
  }

  if (distance < 18){
    stops();
    Serial.println("Stopping");
    delay(500);
    backward();
    Serial.println("Backward");
    delay(500);
    stops();
    Serial.println("Stopping");
    delay(100);  
    right();
    Serial.println("Moving Right"); 
    delay(500);
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