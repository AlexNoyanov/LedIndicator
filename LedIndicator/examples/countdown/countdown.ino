
//  === Countdown example#1 ===
//    Uses class LedIndicator

//  Created by Alexander Noyanov
//  On November 25 2017

// Mail: alex.noyanov@gmail.com

#include <LedIndicator.h> // Library

LedIndicator myIndicator; // Create myIndicator

void setup() {
  // put your setup code here, to run once:
  myIndicator.setPins(6,7,8,9,10,11,12);  // Choose pins

}

void loop() {
  // put your main code here, to run repeatedly:

//  Countdown:
  for(int i = 0; i < 9;i++){
    myIndicator.PrintNum(i);  // Print number
    delay(1000);              // time delay
  }

}
