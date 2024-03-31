int green = 7;
int yellow = 6;
int red = 5;
int button = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT); // pinMode is used to designate pins
  pinMode(yellow, OUTPUT); // OUPUT means that you are outputing infor or voltage
  pinMode(red, OUTPUT); // LED is outputting voltage
  pinMode(button, INPUT); // INPUT means that you are inputing info or voltage
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH); // turns on this LED
  digitalWrite(red, LOW); // This is so that when the code loops again, the red LED is off when the green LED turns on
  for(int i = 0; i < 3000; i++) // i is an iterating or counting variable, so i will increase in value
  {
    if(digitalRead(button) == HIGH) // will check if the button is being pressed
    {
      break; // if the button is pressed it will skip over the rest of the loop and continue the program
      // if the button isn't pressed then only the delay(below) will happen and the for loop will start over agian
    }
    delay(1); // 1 millisecond for each loop
  }
 // delay(5000); // is written in milliseconds and if there is no delay, it would only light up for 1 millisecond which you wouldn't be able to see well
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW); // turns off green LED
  delay(2000); // 2 seconds = 2000 milliseconds
  digitalWrite(red, HIGH); // the code runs really fast so it doesn't matter the order of turning on and off for just two lights because they will look like happening at the same time
  digitalWrite(yellow,LOW);
  delay(5000); // delay means pause the program here
}
