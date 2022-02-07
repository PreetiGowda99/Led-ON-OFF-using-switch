const int led = 13;
const int button = 2;
int buttonstate = 0;



void setup() {
   pinMode(led, OUTPUT);
   pinMode(button, INPUT);
}



void loop() {
  
  buttonstate = digitalRead(button);
  if(buttonstate==HIGH)
  {
    digitalWrite(led, HIGH);
    }
  else
  {
    digitalWrite (led, LOW);
  }
}
