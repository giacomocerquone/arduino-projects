int leftChannel = 0;
int left;

void setup() {
Serial.begin(9600); 
}

void loop() {
  left = analogRead(leftChannel);
  left = left/15;
  Serial.println(left);

}
