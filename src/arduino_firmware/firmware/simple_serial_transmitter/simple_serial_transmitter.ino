int x = 0;

void setup() {
  Serial.begin(115200);
  Serial.setTimeout(1);  //time is in milliseconds
}

void loop() {
  Serial.println(x);
  x++;
  delay(1); //time is in milliseconds
}
