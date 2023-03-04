#define LED_1 D3
#define LED_2 D2
#define LED_3 D1
void setup() {
pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT);
pinMode(LED_3, OUTPUT);
}
void loop() {
digitalWrite(LED_1, HIGH);
delay(250);            
digitalWrite(LED_2, HIGH); 
delay(250); 
digitalWrite(LED_3, HIGH); 
delay(250); 
digitalWrite(LED_1, LOW);
delay(250);            
digitalWrite(LED_2, LOW); 
delay(250); 
digitalWrite(LED_3, LOW); 
delay(250); 
}
