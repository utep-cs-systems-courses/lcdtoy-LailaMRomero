/** \file lcddraw.c
 *  \brief Adapted from RobG's EduKit
 */
#include "lcdutils.h"
#include "lcddraw.h"


/** Draw single pixel at x,row 
 *
 *  \param col Column to draw to
 *  \param row Row to draw to
 *  \param colorBGR Color of pixel in BGR
 */

void coolShape1(){
    for(int x=0; x<=50; x++){
        int colLeft=50-x;
        int colRight = x;
        for(int c =colRight; c<=colLeft; c++){
            drawPixel(50+c,50+x,COLOR_RED);
            drawPixel(50+c,50-x,COLOR_PURPLE);
            drawPixel(50-c,50+x,COLOR_GREEN);
            drawPixel(50-c,50-x,COLOR_YELLOW);
        }
            
        }
    for(int x=0; x<=50; x++){
        int colLeft=50-x;
        int colRight = x;
        for(int c =colRight; c<=colLeft; c++){
            drawPixel(80+c,100+x,COLOR_BLACK);
            drawPixel(80+c,100-x,COLOR_GREEN);
            drawPixel(80-c,100+x,COLOR_RED);
            drawPixel(80-c,100-x,COLOR_ORANGE);
        }
            
        }
}
void coolShape2(){
    for(int x=0; x<=50; x++){
        int colLeft=50-x;
        int colRight = x;
        for(int c =colRight; c<=colLeft; c++){
            drawPixel(65+c,80+x,COLOR_RED);
            drawPixel(65+c,80-x,COLOR_BLUE);
            drawPixel(65-c,80+x,COLOR_PURPLE);
            drawPixel(65-c,80-x,COLOR_YELLOW);
        }
            
        }
    
}
void coolerShape(){
   for(int x=0; x<=50; x++){
        int colLeft=50-x;
        int colRight = x;
        for(int c =colRight; c<=colLeft; c++){
            drawPixel(37+c,95+x,COLOR_RED);
            drawPixel(37+c,50-x,COLOR_PURPLE);
            //drawPixel(50-c,50+x,COLOR_GREEN);
            //drawPixel(50-c,50-x,COLOR_YELLOW);
        }
            
        }
            fillRectangle(40,50, 45, 45, COLOR_ORANGE);


}
void coolestShape(){
      int colLeft, colRight;
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(20+c, 30+r, COLOR_RED);
            drawPixel(20-c, 30+r, COLOR_RED);
            drawPixel(20+c, 30-r, COLOR_RED);
            drawPixel(20-c, 30-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(50+c, 30+r, COLOR_RED);
            drawPixel(50-c, 30+r, COLOR_RED);
            drawPixel(50+c, 30-r, COLOR_RED);
            drawPixel(50-c, 30-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(80+c, 30+r, COLOR_RED);
            drawPixel(80-c, 30+r, COLOR_RED);
            drawPixel(80+c, 30-r, COLOR_RED);
            drawPixel(80-c, 30-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(110+c, 30+r, COLOR_RED);
            drawPixel(110-c, 30+r, COLOR_RED);
            drawPixel(110+c, 30-r, COLOR_RED);
            drawPixel(110-c, 30-r, COLOR_RED);
        }
        for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(20+c, 130+r, COLOR_RED);
            drawPixel(20-c, 130+r, COLOR_RED);
            drawPixel(20+c, 130-r, COLOR_RED);
            drawPixel(20-c, 130-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(50+c, 130+r, COLOR_RED);
            drawPixel(50-c, 130+r, COLOR_RED);
            drawPixel(50+c, 130-r, COLOR_RED);
            drawPixel(50-c, 130-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(80+c, 130+r, COLOR_RED);
            drawPixel(80-c, 130+r, COLOR_RED);
            drawPixel(80+c, 130-r, COLOR_RED);
            drawPixel(80-c, 130-r, COLOR_RED);
        }
    }
    for ( int r=0; r<=15; r+=3){
        colLeft = 15-r;
        colRight = 15;
        for (int c = colLeft; c <= colRight; c+=3){
            drawPixel(110+c, 130+r, COLOR_RED);
            drawPixel(110-c, 130+r, COLOR_RED);
            drawPixel(110+c, 130-r, COLOR_RED);
            drawPixel(110-c, 130-r, COLOR_RED);
        }
    }
    
}
}

void drawTriangle(){

  for(int i=20; i<=50;i++){

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

}
void drawAsterick(){

  for (int x=20; x<50;x++){  // draws 'x'

    drawPixel(x/2,x/2,COLOR_YELLOW);

    drawPixel(x/2,35-x/2,COLOR_YELLOW);

    drawPixel(17.5,x/2, COLOR_YELLOW);

    drawPixel(x/2,17.5,COLOR_YELLOW);

  }
  for (int x=70; x<50;x++){  // draws 'x'

    drawPixel(x/2,x/2,COLOR_YELLOW);

    drawPixel(x/2,35-x/2,COLOR_YELLOW);

    drawPixel(17.5,x/2, COLOR_YELLOW);

    drawPixel(x/2,17.5,COLOR_YELLOW);

  }

}
void drawPixel(u_char col, u_char row, u_int colorBGR) 
{
  lcd_setArea(col, row, col, row);
  lcd_writeColor(colorBGR);
}

/** Fill rectangle
 *
 *  \param colMin Column start
 *  \param rowMin Row start
 *  \param width Width of rectangle
 *  \param height height of rectangle
 *  \param colorBGR Color of rectangle in BGR
 */
void fillRectangle(u_char colMin, u_char rowMin, u_char width, u_char height, 
		   u_int colorBGR)
{
  u_char colLimit = colMin + width, rowLimit = rowMin + height;
  lcd_setArea(colMin, rowMin, colLimit - 1, rowLimit - 1);
  u_int total = width * height;
  u_int c = 0;
  while ((c++) < total) {
    lcd_writeColor(colorBGR);
  }
}

/** Clear screen (fill with color)
 *  
 *  \param colorBGR The color to fill screen
 */
void clearScreen(u_int colorBGR) 
{
  u_char w = screenWidth;
  u_char h = screenHeight;
  fillRectangle(0, 0, screenWidth, screenHeight, colorBGR);
}

/** 5x7 font - this function draws background pixels
 *  Adapted from RobG's EduKit
 */
void drawChar5x7(u_char rcol, u_char rrow, char c, 
     u_int fgColorBGR, u_int bgColorBGR) 
{
  u_char col = 0;
  u_char row = 0;
  u_char bit = 0x01;
  u_char oc = c - 0x20;

  lcd_setArea(rcol, rrow, rcol + 4, rrow + 7); /* relative to requested col/row */
  while (row < 8) {
    while (col < 5) {
      u_int colorBGR = (font_5x7[oc][col] & bit) ? fgColorBGR : bgColorBGR;
      lcd_writeColor(colorBGR);
      col++;
    }
    col = 0;
    bit <<= 1;
    row++;
  }
}

/** Draw string at col,row
 *  Type:
 *  FONT_SM - small (5x8,) FONT_MD - medium (8x12,) FONT_LG - large (11x16)
 *  FONT_SM_BKG, FONT_MD_BKG, FONT_LG_BKG - as above, but with background color
 *  Adapted from RobG's EduKit
 *
 *  \param col Column to start drawing string
 *  \param row Row to start drawing string
 *  \param string The string
 *  \param fgColorBGR Foreground color in BGR
 *  \param bgColorBGR Background color in BGR
 */
void drawString5x7(u_char col, u_char row, char *string,
		u_int fgColorBGR, u_int bgColorBGR)
{
  u_char cols = col;
  while (*string) {
    drawChar5x7(cols, row, *string++, fgColorBGR, bgColorBGR);
    cols += 6;
  }
}


/** Draw rectangle outline
 *  
 *  \param colMin Column start
 *  \param rowMin Row start 
 *  \param width Width of rectangle
 *  \param height Height of rectangle
 *  \param colorBGR Color of rectangle in BGR
 */
void drawRectOutline(u_char colMin, u_char rowMin, u_char width, u_char height,
		     u_int colorBGR)
{
  /**< top & bot */
  fillRectangle(colMin, rowMin, width, 1, colorBGR);
  fillRectangle(colMin, rowMin + height, width, 1, colorBGR);

  /**< left & right */
  fillRectangle(colMin, rowMin, 1, height, colorBGR);
  fillRectangle(colMin + width, rowMin, 1, height, colorBGR);
}

