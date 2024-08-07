// simple program to turn on LED according to how much light is in our (will be picked up by a photosensor)
int lightsensor = A0;
int light = 0;
int LED = 2;

void setup() {
  Serial.begin(9600); // Asking serial monitor to begin

  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  light = analogRead(lightsensor);

  if(light > 450) { // If the light in our room is greater than zero (We don't know the light in our room yet so we set it to zero for now)
    digitalWrite(LED, LOW); // tell LED to not give any voltage to LED
  } else {
    digitalWrite(LED, HIGH); // Otherwise the LED should turn on if it is dark
  }

  Serial.println(light); // asking serial monitor to print out the level of light in my room to put in if else statement

  delay(100); // wait a tenth of a second or 100 milliseconds before restarting the loop
}
// Need to check what number the serial monitor is printing when it is light and dark in your room
// You need to modify the code accordingly
// number in the if statement will be changed to a number that is in the middle of both high and low numbers printed in the serial monitor
