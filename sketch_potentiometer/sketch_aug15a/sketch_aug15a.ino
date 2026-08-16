#define LED_PIN 11
#define POTENTIOMETER_PIN A2
void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  int resistance=analogRead(POTENTIOMETER_PIN);
  int divFour=resistance/4;
  Serial.println(resistance);
  Serial.println(divFour);
  analogWrite(LED_PIN,divFour);


}
