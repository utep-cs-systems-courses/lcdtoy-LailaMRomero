/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "buzzer.h"
#include "led.h"
#include "switches.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  switch_init();
  buzzer_init();
  led_init();
  enableWDTInterrupts();

  lcd_init();
   u_char width = screenWidth, height = screenHeight;
  
  clearScreen(COLOR_WHITE);
  or_sr(0x18);
  ///    drawHouse();

  /*for (int c=0;c<=10;c++){
     int  rowStart=0;
     int  rowEnd=c;
      for(int r=rowStart;r<=rowEnd; r++){
	drawPixel(6*c-c,6*r+r,COLOR_BLUE);
	drawPixel(6*c-c,6*r+r,COLOR_BLUE);
      }
      }*/
   
   or_sr(0x18);
}
/*void drawTriangle(){
  for(int i=0; i<=10;i++){
    drawPixel(50,i+10, COLOR_BLACK);
    drawPixel(30,i+10,COLOR_BLACK);
    drawPixel(30+2*i,10,COLOR_BLACK);
    drawPixel(30+2*i,20,COLOR_BLACK);
  }
  for(int j=0; j<=10;j++){
    drawPixel(30,j+10,COLOR_BLACK);
    drawPixel(20+j,20, COLOR_BLACK);
    drawPixel(20+j/2,20-j/2, COLOR_BLACK);
  }
  }*/
void drawAsterick(){
  for (int x=20; x<50;x++){  // draws 'x'
    drawPixel(x/2,x/2,COLOR_BLUE);
    drawPixel(x/2,35-x/2,COLOR_BLUE);
    drawPixel(17.5,x/2, COLOR_BLUE);
    drawPixel(x/2,17.5,COLOR_BLUE);
  }
}

void drawHouse(){
  for (int j=10; j<40; j++){// draws triangle
    drawPixel(20+j/2,30+j/2,COLOR_GREEN);
    drawPixel(j,50,COLOR_GREEN);
    drawPixel(j,25,COLOR_GREEN);
    drawPixel(30-j/2,30+j/2,COLOR_GREEN);
  }
  /*  for(int i =10; i<40; i++){
    drawPixel(40,40+i,COLOR_GREEN);
    drawPixel(10,40+i, COLOR_GREEN);
    drawPixel(i,80,COLOR_GREEN);
    }*/


  //  fillRectangle(30,30, 60, 60, COLOR_ORANGE);
  
}
