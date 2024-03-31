// A simple program to sequentially turn on and off 3 LEDs

// Pin Setup, 3 LEDs variables, need to connect LEDs to these pins through jumper wires
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;

void setup() {
  pinMode(LED1, OUTPUT); // All LED's are usually set as OUPUT which means its able to give voltage
  pinMode(LED2, OUTPUT); // Able to make something an input or output pin
  pinMode(LED3, OUTPUT);
}

void loop() { // Our loop that will keep going until you unplug or stop the program
  // HIGH means giving voltage and LOW means not giving any voltage
  digitalWrite(LED1, HIGH);       // turn on the LED connected to pin 13 or give voltage to pin 13
  delay(200);                     // wait for 200 milliseconds or .2 seconds
  digitalWrite(LED2, HIGH);       // turn on the LED connected to pin 12 or give voltage to pin 12
  delay(200);                     // wait for 200 milliseconds or .2 seconds
  digitalWrite(LED3, HIGH);       // turn on the LED connected to pin 11 or give voltage to pin 11
  delay(200);                     // wait for 200 milliseconds or .2 seconds
  // Now we turn all the LED's off
  digitalWrite(LED1, LOW);        // turn off the LED connected to pin 13 or remove voltage to pin 13
  delay(300);                     // wait for 300 milliseconds or .3 seconds
  digitalWrite(LED2, LOW);       // turn off the LED connected to pin 12 or remove voltage to pin 12
  delay(300);                     // wait for 300 milliseconds or .3 seconds
  digitalWrite(LED3, LOW);       // turn off the LED connected to pin 11 or remove voltage to pin 11
  delay(300);                     // wait for 300 milliseconds or .3 seconds
}