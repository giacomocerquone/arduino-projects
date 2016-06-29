int tempo=10; //regolare a piacere
int soglia = 10  ;
int valore  = 0 ;
void setup() {
  for (int i=2;i<=10;i++)
  {
  pinMode (i, OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  delay(tempo);
    valore = analogRead(A0);
    //Serial.print("Valore audio: "); //l'output sulla seriale rallenta i led
    Serial.println(valore);
    if ( (soglia *1)  <valore) {digitalWrite (10 ,HIGH);} else {digitalWrite (10 ,LOW);}
    if ( (soglia *2)  <valore) {digitalWrite (9  ,HIGH);} else {digitalWrite (9  ,LOW);}
    if ( (soglia *3)  <valore) {digitalWrite (8  ,HIGH);} else {digitalWrite (8  ,LOW);}
    if ( (soglia *4)  <valore) {digitalWrite (7  ,HIGH);} else {digitalWrite (7  ,LOW);}
    if ( (soglia *5)  <valore) {digitalWrite (6  ,HIGH);} else {digitalWrite (6  ,LOW);}
    if ( (soglia *6)  <valore) {digitalWrite (5  ,HIGH);} else {digitalWrite (5  ,LOW);}
    if ( (soglia *7) <valore) {digitalWrite (4  ,HIGH);} else {digitalWrite (4  ,LOW);}
    if ( (soglia *8) <valore) {digitalWrite (3  ,HIGH);} else {digitalWrite (3  ,LOW);}
    if ( (soglia *9) <valore) {digitalWrite (2  ,HIGH);} else {digitalWrite (2  ,LOW);}
  }
