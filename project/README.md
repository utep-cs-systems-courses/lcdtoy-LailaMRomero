# Project 3
## Introduction

The main purpose of this project was to learn how to use the lcd screen and
incorporate the switches, lights and buzzer. My project incorporates all
thress aspects.

## How to use

 - From the main repository, navigate into the project folder
 - Once inside the project folder, type "make" to compile
 - After it has compiled, type "make load"
 - After running "make load" it should appear on the msp430 and will be ready
 - to use 
 
## What it should do

 - The msp430 should have a default welcome screen showing a menu of
   options. Each option corresponds to switch numbers. While pressed, the
   switches should produce the following: 

 - S1 will display a secret message, play a song, and turn on the leds

 - S2 will display an image, play a song and turn on the leds
 
 - S3 will display an image, play a song and turn on the leds
 
 - S4 will display an image, play a song and turn on the leds

If none of the switches are being held down the lcd screen will return to the
default welcome screen.
