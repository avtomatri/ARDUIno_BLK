//----------------------------------------Include Library
//----------------------------------------see here: https://www.youtube.com/watch?v=8jMr94B8iN0 to add NodeMCU ESP8266 library and board
#include <DMDESP.h>
#include <fonts/ElektronMart6x8.h>
#include <fonts/Mono5x7.h>
//----------------------------------------
const int pb = 4;
int nilai_pb =0;
int x=0;
//----------------------------------------DMD Configuration (P10 Panel)
#define DISPLAYS_WIDE 1 //--> Panel Columns
#define DISPLAYS_HIGH 1 //--> Panel Rows
DMDESP Disp(DISPLAYS_WIDE, DISPLAYS_HIGH);  //--> Number of Panels P10 used (Column, Row)
//----------------------------------------

//========================================================================VOID SETUP()
void setup() {
  //----------------------------------------DMDESP Setup
  Disp.start(); //--> Run the DMDESP library
  Disp.setBrightness(50); //--> Brightness level
  Disp.setFont(Mono5x7); //--> Determine the font used
  pinMode (pb,INPUT_PULLUP);
  //----------------------------------------
}
//========================================================================

//========================================================================VOID LOOP()
void loop() {
  nilai_pb=digitalRead(pb);
  delay (500);
  if (nilai_pb==LOW){
    x++;
  }
  //==========================================================================================================
  case 1:
  {
  Disp.loop(); //--> Run "Disp.loop" to refresh the LED
  Disp.drawText(4, 0, "UTEH"); //--> Display text "Disp.drawText(x position, y position, text)"
  Scrolling_Text(9, 50); //--> Show running text "Scrolling_Text(y position, speed);"
}
//========================================================================
case 2:
//========================================================================Subroutines for scrolling Text
static char *Text[] = {"NodeMCU ESP8266 P10 LED Panel with DMDESP"};

void Scrolling_Text(int y, uint8_t scrolling_speed) {
  static uint32_t pM;
  static uint32_t x;
  int width = Disp.width();
  Disp.setFont(Mono5x7);
  int fullScroll = Disp.textWidth(Text[0]) + width;
  if((millis() - pM) > scrolling_speed) { 
    pM = millis();
    if (x < fullScroll) {
      ++x;
    } else {
      x = 0;
      return;
    }
    Disp.drawText(width - x, y, Text[0]);
  }  
}
