int ledPin = D0;
int inputPin = D7;
int val = 0;

void setup() 
{ 
   pinMode(ledPin, OUTPUT);
   pinMode(inputPin, INPUT);
}

void loop()
{ 
   val = digitalRead(inputPin);
   if (val == HIGH)
   {
      digitalWrite(ledPin, LOW); 
   } 
   else 
   { 
      digitalWrite(ledPin, HIGH);
   } 
}
