#include <msp430.h>
#include "libTimer.h"
#include "led.h"
#include "switches.h"
#include "buzzer.h"
#include "stateMachine.h"
#include "lcddraw.h"
#include "lcdutils.h"

char switch_state_down, switch_state_changed, tempo,s1,s2,s3,s4;

static char switch_update_interrupt_sense(){

  char p2val = P2IN;

  //update switch interrupt to detect changes from current button

  P2IES |= (p2val & SWITCHES); //if switch up, sense down
  P2IES &= (p2val | ~SWITCHES); //if switch down, sense up
  return p2val;



}
void switch_init(){ //setup switch

  P2REN |= SWITCHES; //enables resistors for switches

  P2IE = SWITCHES; //enable interrupts from switches

  P2OUT |= SWITCHES; //pull-ups for switches

  P2DIR &= ~SWITCHES; //set switches' bits for input

}
void switch_interrupt_handler(){

  char p2val = switch_update_interrupt_sense();

  s1 = (p2val & SW1) ? 1 : 0; //switch 1

  s2 = (p2val & SW2) ? 1 : 0; //switch 2

  s3 = (p2val & SW3) ? 1 : 0; //switch 3

  s4 = (p2val & SW4) ? 1 : 0; //switch 4

  buzzer_set_period(0);



  if(!(p2val & s1)){ // when switch 1 is pressed the green and red leds will turn on and will play a song

    state_advance();
    tempo=15;
    song2();
    clearScreen(COLOR_BLACK);
    drawString5x7(20,50, "Laila's project", COLOR_YELLOW, COLOR_BLACK);
    drawString5x7(20,60, "is the best!", COLOR_YELLOW, COLOR_BLACK);
    drawAsterick();
    switch_state_changed=1;

  } else if (!(p2val & s2)){ // when switch 3 is pressed the green and red leds will turn on and will play a song

    tempo=1;
    song3();
    led_update();
    clearScreen(COLOR_BLUE);
    coolShape1();
    switch_state_changed=2;
    


  } else if (!(p2val & s3)){  // when switch 4 is pressed the green and red leds will turn  on and will play a song
    clearScreen(COLOR_BLUE);
    buzzer_set_period(0);
    tempo=1;
    song1();
    led_update();
    drawString5x7(20,20, "", COLOR_WHITE, COLOR_RED);
    switch_state_changed=3;


  } else if(!(p2val & s4)){  // when switch 2 is pressed the leds will turn off and will play a son
    tempo=12;
    song4();
    led_update();
    clearScreen(COLOR_YELLOW);
    coolestShape();
    switch_state_changed=4;

  } else {
    switch_state_down = 0;
    switch_state_changed = 1;
    buzzer_set_period(0);
  }

  switch_state_changed=1;
  led_update();

}

