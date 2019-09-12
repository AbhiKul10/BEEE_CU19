int led_flash=13; //defines usage of pin 13 for connecting LED

void setup() {

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
//initialising the digital i/o pin 13,12,11 as ouput.
}

void loop() {
digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);

//LEDs turns ON due to supply of high voltage

delay(1000); //wait for 1 second

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, LOW);

//LED turn OFF due to LOW supply of voltage

delay(1000); //again wait for 1 second
}
