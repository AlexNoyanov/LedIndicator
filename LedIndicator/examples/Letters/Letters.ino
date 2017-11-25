
// === Printing letters ===
//  Example #2

// Created by Alexander Noyanov
// On November 25 2017

// Mail: alex.noyanov@gmail.com


#include <LedIndicator.h> // Library

LedIndicator myIndicator; 

void setup() {
  // put your setup code here, to run once:
  myIndicator.setPins(6,7,8,9,10,11,12);  // Set pins
}

void loop() {
  // put your main code here, to run repeatedly:

//  Printing letters:
myIndicator.A();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.b();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.C();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.d();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.E();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator

myIndicator.f();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator

myIndicator.G();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.H();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.One();  // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.J();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.L();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

myIndicator.U();    // Print letter
delay(1000);        // Delay
myIndicator.Off();  // Turn off indicator
delay(1000);

}
