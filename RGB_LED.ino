int red = 11;
int green = 10;
int blue = 9;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  analogWrite(11, 100); // Color of red from 0 to 255
  analogWrite(10, 250); // Color of blue from 0 to 255
  analogWrite(9, 100); // Color of green from 0 to 255
  delay(1000);
  analogWrite(11, 20);
  analogWrite(10, 200); 
  analogWrite(9, 230); 
  delay(1000);
}
// If you have an R,G,B of 255,255,255, you get white
// If you have an R,G,B of 0,0,0, you get black
