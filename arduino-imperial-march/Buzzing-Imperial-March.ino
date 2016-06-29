#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

float C3 = 130.81,
      Cd3 = 138.59,
      D3 = 146.83,
      Dd3 = 155.56,
      E3 = 164.81,
      F3 = 174.61,
      Fd3 = 185.00,
      G3 = 196.00,
      Gd3 = 207.65,
      a3 = 220,
      Ad3 = 233.08,
      B3 = 246.94,
      C4 = 261.63,
      Cd4 = 277.18,
      D4 = 293.66,
      Dd4 = 311.13,
      E4 = 329.63,
      F4 = 349.23,
      Fd4 = 369.99,
      G4 = 392.00,
      Gd4 = 415.30,
      a4 = 440.00,
      Ad4 = 466.16,
      B4 = 493.88,
      C5 = 523.25,
      Cd5 = 554.37,
      Dd5 = 622.25,
      E5 = 659.26,
      F5 = 698.46,
      Fd5 = 739.99,
      G5 = 783.99;
      
int CicalinoSx = 2, RedLed = 3, GreenLed = 4, BlueLed = 5, timer = 1;
float qmm = 37.5, qm = 75, q1 = 150, q2 = 300, q3 = 450, q4 = 600, q5 = 750, q6 = 900, q7 = 1050, q8 = 1200, q10 = 1500, q12 = 1800;

void setup() {
  lcd.begin(16, 2);
  
  pinMode(CicalinoSx, OUTPUT); //CicalinoSx
  
  pinMode(RedLed, OUTPUT); //RedLed
  pinMode(GreenLed, OUTPUT); //GreenLed
  pinMode(BlueLed, OUTPUT); //BlueLed
}


void loop() {
  if(timer == 1) {
    for(int i=0; i<2; i++) {
      tone(CicalinoSx, G3, qmm);
      delay(q4);
      
      tone(CicalinoSx, G3, qmm);
      delay(q2);
      
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      
      tone(CicalinoSx, G3, qmm);
      delay(q2);
      
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      tone(CicalinoSx, G3, qmm);
      delay(qm);
      
      tone(CicalinoSx, Dd3, qmm);
      delay(qm);
      tone(CicalinoSx, Dd3, qmm);
      delay(qm);
      tone(CicalinoSx, Dd3, qmm);
      delay(qm);
      tone(CicalinoSx, Dd3, qmm);
      delay(qm);
      tone(CicalinoSx, Dd3, qmm);
      delay(q2);
      }
      timer++;
  }
  
  lcd.setCursor(0, 0);
  
  tone(CicalinoSx, G3, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  lcd.clear();
  delay(q2);

  tone(CicalinoSx, G3, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  lcd.clear();  
  delay(q2);
  
  tone(CicalinoSx, G3, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q2);
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(GreenLed, LOW);
  
  tone(CicalinoSx, G3, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q2);
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(GreenLed, LOW);
  
  tone(CicalinoSx, G3, q5);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q5);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q3);
  
  tone(CicalinoSx, D4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q2);
  
  tone(CicalinoSx, D4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q2);

  tone(CicalinoSx, D4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q2);

  tone(CicalinoSx, Dd4, q2);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(BlueLed, LOW);
  
  tone(CicalinoSx, Fd3, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q2);
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(GreenLed, LOW);
  
  tone(CicalinoSx, G3, q5);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q5);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q3);

  tone(CicalinoSx, G4, q2);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(q2);

  tone(CicalinoSx, G3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);

  tone(CicalinoSx, G3, qm);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(qm);
  digitalWrite(BlueLed, LOW);
  delay(qm);

  tone(CicalinoSx, G4, q3);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q3);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(q1);

  tone(CicalinoSx, Fd4, q2);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q1);

  tone(CicalinoSx, F4, qm);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(qm);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(qm);
  
  tone(CicalinoSx, E4, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(qm);
  digitalWrite(BlueLed, LOW);
  delay(qm);
  
  tone(CicalinoSx, Dd4, q1);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(RedLed, LOW);
  
  tone(CicalinoSx, E4, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q3);
  
  tone(CicalinoSx, Gd3, q1);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Cd4, q3);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q3);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, C4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);

  tone(CicalinoSx, B3, qm);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(qm);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  delay(qm);

  tone(CicalinoSx, Ad3, q1);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(qm);
  digitalWrite(RedLed, LOW);
  delay(qm);

  tone(CicalinoSx, a3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(BlueLed, LOW);

  tone(CicalinoSx, Ad3, q1);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q3);
  
  tone(CicalinoSx, Dd3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Fd3, q3);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q3);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(GreenLed, LOW);
  
  tone(CicalinoSx, G3, q3);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q3);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  delay(q1);
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  delay(q1);
  digitalWrite(GreenLed, LOW);
  
  tone(CicalinoSx, G3, q5);
  digitalWrite(RedLed, HIGH);   lcd.print("TA!");
  delay(q5);
  digitalWrite(RedLed, LOW);   lcd.clear();
  delay(q3);
  
  
/////////////////////////////////////////////
  
  
  tone(CicalinoSx, G4, q2);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q2);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q2);
  
  tone(CicalinoSx, G3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  tone(CicalinoSx, G3, qm);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(qm);
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, LOW);
  delay(qm);
  
  
  
  
  tone(CicalinoSx, G4, q3);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q3);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  tone(CicalinoSx, Fd4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(GreenLed, LOW);
  delay(q1);
  
  
  
  
  tone(CicalinoSx, F4, qm);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(qm);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(qm);
  
  
  
  tone(CicalinoSx, E4, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(qm);
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, LOW);
  delay(qm);
  
  
  
  tone(CicalinoSx, Dd4, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);
  digitalWrite(GreenLed, LOW);
  
  
  
  
  tone(CicalinoSx, E4, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q3);
  
  
  
  tone(CicalinoSx, Gd3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(GreenLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, Cd4, q3);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q3);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  
  
  tone(CicalinoSx, C4, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, B3, qm);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(qm);
  digitalWrite(GreenLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(qm);
  
  
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(qm);
  digitalWrite(BlueLed, LOW);
  digitalWrite(GreenLed, LOW);
  delay(qm);
  
  
  
  tone(CicalinoSx, a3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, LOW);
  
  
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(GreenLed, LOW);
  delay(q3);
  
  
  
  
  
  tone(CicalinoSx, Dd3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, Fd3, q3);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q3);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(GreenLed, LOW);
  delay(q1);
  
  
  
  
  tone(CicalinoSx, Dd3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, G3, q1);
  digitalWrite(GreenLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q1);
  digitalWrite(GreenLed, LOW);
  digitalWrite(RedLed, LOW);
  
  
  
  tone(CicalinoSx, Ad3, q3);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q3);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(GreenLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, G3, q2);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(RedLed, HIGH);
  delay(q2);
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  delay(q1);
  
  
  
  tone(CicalinoSx, Ad3, q1);
  digitalWrite(BlueLed, HIGH);   lcd.print("TA!");
  digitalWrite(GreenLed, HIGH);
  delay(q1);
  digitalWrite(BlueLed, LOW);
  digitalWrite(GreenLed, LOW);
  
  
  
  tone(CicalinoSx, D4, q10);
  digitalWrite(RedLed, HIGH);   lcd.print("TA");
  delay(qm);   lcd.print("A");
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(GreenLed, LOW);
  digitalWrite(BlueLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(GreenLed, LOW);
  digitalWrite(BlueLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(GreenLed, LOW);
  digitalWrite(BlueLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(qm);   lcd.print("A"); //q5
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(GreenLed, LOW);
  digitalWrite(BlueLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, LOW);
  digitalWrite(RedLed, HIGH);
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, HIGH);
  digitalWrite(GreenLed, HIGH);
  delay(qm);   lcd.print("A"); // 16a
  delay(qm);   lcd.setCursor(0, 1); lcd.print("A");
  delay(qm);   lcd.print("A");
  delay(qm);   lcd.print("A");
  delay(qm);   lcd.print("A");
  digitalWrite(BlueLed, LOW);   lcd.clear();
  digitalWrite(RedLed, LOW);
  digitalWrite(GreenLed, LOW);
  delay(q6);
  
}
