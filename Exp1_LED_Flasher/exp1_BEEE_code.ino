int led_flash=13; //defines usage of pin 13 for connecting LED

void setup() {

  pinMode(led_flash, OUTPUT);
  
//initialising the digital i/o pin led_flash as ouput.
}

void loop() {
digitalWrite(led_flash, HIGH);

//LED turns ON due to supply of high voltage

delay(1000); //wait for 1 second

digitalWrite(led_flash, LOW);

//LED turn OFF due to LOW supply of voltage

delay(1000); //again wait for 1 second
}
