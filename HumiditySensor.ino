#include <dht_nonblocking.h>
#include <LiquidCrystal.h>

static const int DHT_SENSOR_PIN = 2; // made a constant unchaned sensor pin
DHT_nonblocking dht_sensor(DHT_SENSOR_PIN, DHT_TYPE_11);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // numbers refer to pins we used on the arduino for LCD

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2); // max numbers of columns and rows for LCD
}

static bool measure_environment(float *temperature, float * humidity) {

  static unsigned long measurement_timestamp = millis(); // millis is amount of milliseconds since it started running

  if (millis() - measurement_timestamp > 1000) {
    if (dht_sensor.measure(temperature, humidity) == true) {
      // asking sensor to measure the surrounding and give measurements if above if statement is true
      measurement_timestamp = millis();
      return (true);
    }
  }
  return(false);
}

void loop() {
  // put your main code here, to run repeatedly:
  float temperature; // in celcius
  float humidity;

  if (measure_environment(&temperature, &humidity) == true) {
    lcd.setCursor(0,0);
    lcd.print("T: ");
    lcd.print(temperature);
    lcd.setCursor(0,1);
    lcd.print("H: ");
    lcd.print(humidity); // Turn potentiometer if you can't see the text on LCD
  }
}
