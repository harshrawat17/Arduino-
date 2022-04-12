void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:


  digitalWrite(13, HIGH);
  delayMicroseconds(0.005); // Approximately 50% duty cycle @ 100KHz
  digitalWrite(13, LOW);
  delayMicroseconds(0.005);

}
