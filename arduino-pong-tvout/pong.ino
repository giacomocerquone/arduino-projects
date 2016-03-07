/*
# This file is part of TVout-Arduino-Pong.
#
# Copyright(c) 2013 Giacomo Cerquone
# cerquone96@hotmail.it
# http://www.giacomocerquone.it
#
# This file may be licensed under the terms of of the
# GNU General Public License Version 2 (the ``GPL'').
#
# Software distributed under the License is distributed
# on an ``AS IS'' basis, WITHOUT WARRANTY OF ANY KIND, either
# express or implied. See the GPL for the specific language
# governing rights and limitations.
#
# You should have received a copy of the GPL along with this
# program. If not, go to http://www.gnu.org/licenses/gpl.html
# or write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*/

#include <TVout.h>
#include <fontALL.h>
TVout TV;

//INFORMAZIONI SUI COMPONENTI

//Dichiarazione Pin
int BtnDown = 2, BtnUp = 3, BtnStart = 4; 

//Incremento posizione pallina
float sx = 1, sy = 1;

//Punteggio
int p1 = 0, p2 = 0;

//Posizione racchetta 1
int P1StartY = 2, P1EndY = 17;
//Posizione racchetta 2
int P2StartY = 2, P2EndY = 17;
//Incremento posizione racchette
int racchVel = 2;
//Posizione pallina
float BallX = 0, BallY = 0;
//Velocità pallina
int BallV = 10;
//Posizione cursore
int CursoreX = 1, CursoreY = 10;

//Informazioni Risoluzione Schermo
int width = 0, height = 0;
int halfWidth = 0, halfHeight = 0;

//Variabile di stato del gioco
boolean play = false;
int state = 0;

void setup() {
  Serial.begin(9600);
  
  pinMode(BtnUp, INPUT);
  pinMode(BtnDown, INPUT);
  pinMode(BtnStart, INPUT);
  
  TV.begin(PAL);
  TV.clear_screen();
  
  //Informazioni Risoluzione Schermo
  width = TV.hres(), height = TV.vres();
  halfWidth = TV.hres()/2, halfHeight = TV.vres()/2;
  
  //Posizione pallina
  BallX = halfWidth, BallY = halfHeight;
  
  //Disegna il benvenuto 
  TV.select_font(font8x8);
  TV.print(10, 10, "Pong!");
  TV.select_font(font4x6);
  TV.print(10, 30, "Developed");
  TV.print(23, 39, "by");
  TV.print(0, 47, "Cerquone Giacomo");
  delay(5000);
}

void loop() {

  //Se l'avversario fa punto, la palla si blocca al centro e si muove dopo aver premuto il pulsante start
  if(digitalRead(BtnStart) == HIGH) {
    play = true;
  }


  //MENU

  //Se la variabile state è uguale a 0 (menù), disegna menu
  while(state == 0) {
    delay(10);
    TV.clear_screen();
    
    TV.select_font(font4x6);
    TV.print_char(CursoreX, CursoreY, '>');
    TV.print(halfWidth-6, 10, "Gioca");
    TV.print(halfWidth-12, 20, "Settaggi");
    
    
    if(digitalRead(BtnUp) == HIGH && CursoreY != 10) {
      CursoreY -= 10;
    }
    if(digitalRead(BtnDown) == HIGH && CursoreY != 20) {
      CursoreY += 10;
    }
    
    //Entra in gioco
    if(digitalRead(BtnStart) == HIGH && CursoreY == 10) {
        delay(200);
        state = 1;
        play = true;
    }
    //Entra in settaggi
    if(digitalRead(BtnStart) == HIGH && CursoreY == 20) {
        delay(200);
        state = 2;
    }
  }




  //SETTAGGI
  //Se la variabile state è uguale a 2 (settaggi), disegna i settaggi
  while(state == 2) {
    delay(10);
    TV.clear_screen();
    
    TV.print_char(CursoreX, CursoreY, '>');
    TV.print(halfWidth-7, 10, "Velocità pallina");
    TV.print(halfWidth-7, 20, "Velocità racchetta");
    TV.println(halfWidth-4, 30, "<-");
    
    if(digitalRead(BtnUp) == HIGH && CursoreY != 10) {
      CursoreY -= 10;
    }
    if(digitalRead(BtnDown) == HIGH && CursoreY != 30) {
      CursoreY += 10;
    }

    //Torna al menu
    if(digitalRead(BtnStart) == HIGH && CursoreY == 30) {
      delay(200);
      state = 0;
    }
  }

  
  
  
  //GIOCO
  //Se la variabile state è uguale a 1 (gioco) e la variabile play è uguale a 1 (in gioco), disegna gioco
  while(state == 1 && play == true) {
    
    BallX += sx;
    BallY += sy;
    
    if((BallY < 3) || (BallY > height-5)) {
      sy = sy * -1;
    }
    
    if(BallX > width) {
      p1 = p1 + 1;
      BallX = width / 2;
      BallY = height / 2;
      play = false;
    }
    if(BallX < 0) {
      p2 = p2 + 1;
      BallX = width / 2;
      BallY = height / 2;
      play = false;
    }
    
    // collision detection
    if ((BallX <= 4) && (BallX >= 3) && (BallY >= P1StartY) && (BallY <= (P1StartY +15))) {
      sx = sx*-1;
    }
    // collision detection racchetta 2
    if ((BallX <= width-3) && (BallX >= width-4) && (BallY >= P2StartY) && (BallY <= P2StartY+15)) {
      sx = sx*-1;
    }

    delay(BallV);
    TV.clear_screen();
    
    //Disegna pallina  
    TV.draw_circle(BallX, BallY, 2, 1, 1);
    //Disegna linea di mezzo
    TV.draw_line(halfWidth, 2, halfWidth, height-3, 1);
    //Disegna racchetta 1
    TV.draw_line(2, P1StartY, 2, P1EndY, 1);
    //Disegna racchetta 2
    TV.draw_line(width-2, P2StartY, width-2, P2EndY, 1);
    //Disegna punteggio P1
    TV.print(halfWidth-10, halfHeight, p1);
    //Disegna punteggio P2
    TV.print(halfWidth+10, halfHeight, p2);
      
    //Movimenti racchetta 2 automatici
    P2StartY = BallY-6;
    P2EndY = BallY+9;
    if(P2StartY < 2) {
      P2StartY = 2;
      P2EndY = 17;
    }
    if(P2EndY > height) {
      P2StartY = height-15;
      P2EndY = height;
    }
      keyPressed();
  }
  
  
}

void keyPressed() {
  if(digitalRead(BtnUp) == HIGH && P1StartY != 2 && P1EndY != 17) {
    P1StartY -= racchVel;
    P1EndY -= racchVel;
  }
  
  if(digitalRead(BtnDown) == HIGH && P1StartY != height-18 && P1EndY != height-3) {
    P1StartY += racchVel;
    P1EndY += racchVel;
  }
}
