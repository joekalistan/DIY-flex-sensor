
const int ldrpin = A0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int LDRValue = analogRead(ldrpin);
  Serial.println(LDRValue);
  delay(100);
  // put your main code here, to run repeatedly:

}
