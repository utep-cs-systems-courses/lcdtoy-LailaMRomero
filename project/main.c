#include <msp430.h>

#include "libTimer.h"

#include "lcdutils.h"

#include "lcddraw.h"

#include "buzzer.h"

#include "led.h"

#include "switches.h"



int main() {

  configureClocks();
  switch_init();
  buzzer_init();
  led_init();
  enableWDTInterrupts();



  lcd_init();

  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);
  drawString5x7(20,30, " hello world.", COLOR_WHITE, COLOR_BLUE);
  drawString5x7(10,60, " menu:", COLOR_WHITE, COLOR_BLUE);
  drawString5x7(10,75, " 1.secret message", COLOR_WHITE, COLOR_BLUE);
  drawString5x7(10,85, " 2.cool shape ", COLOR_WHITE, COLOR_BLUE);
  drawString5x7(10,95, " 3.cooler shape", COLOR_WHITE, COLOR_BLUE);
  drawString5x7(10,105, " 4.coolest shape", COLOR_WHITE, COLOR_BLUE);
  or_sr(0x18);    // CPU off, GIE on

}
