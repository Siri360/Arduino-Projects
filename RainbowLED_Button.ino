// pin setup
int red = 13;
int yellow = 12;
int green = 11;
int blue = 10;
int white = 9;
int button = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH);
  digitalWrite(white, LOW);
  for(int i = 0; i < 3000; i++) // i is an iterating or counting variable, so i will increase in value
  {
    if(digitalRead(button) == HIGH) // will check if the button is being pressed
    {
        break;
    }
    delay(1000); // 1 millisecond for each loop
  }

  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(2000);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  delay(2000);
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  delay(2000);
  digitalWrite(white, HIGH);
  digitalWrite(blue, LOW);
  delay(2000);
}
