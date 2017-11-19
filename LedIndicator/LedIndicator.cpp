//*************************************
//  LedIndicator.cpp
//  7-Segments LED-indicator libriary
//  Created by Alex Noyanov on 11/10/15.
//*************************************
// Mail: alex.noyanov@gmail.com

#include "LedIndicator.h"


//  Pins:
int rup  = 6;
int rdwn = 5;
int dwn  = 4;
int mdl  = 7;
int ldwn = 11;
int lup  = 12;
int up   = 13;

// Functions:


void LedIndicator::begin(int Rup , int Rdwn, int Dwn,int Mdl, int Lup,int Lwnd,int Up){
    
    pinMode(Up,OUTPUT);
    pinMode(Mdl,OUTPUT);
    pinMode(Dwn,OUTPUT);
    pinMode(Lup,OUTPUT);
    pinMode(Ldwn,OUTPUT);
    pinMode(Rup,OUTPUT);
    pinMode(Rdwn,OUTPUT);

}

// Numbers
void LedIndicator::One()
{
    digitalWrite(rup,LOW);
    digitalWrite(rdwn,LOW);
}

void LedIndicator::Two()
{
    digitalWrite(up,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::Three()
{
    digitalWrite(up,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(dwn,LOW);
}
void LedIndicator::Four()
{
    digitalWrite(rup,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);}

void LedIndicator::Five() {
    digitalWrite(up,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(dwn,LOW);
}
void LedIndicator::Six() {
    digitalWrite(up,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(dwn,LOW);
}
void LedIndicator::Seven() {
    digitalWrite(rup,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(up,LOW);
}
void LedIndicator::Eight() {
    digitalWrite(up,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(dwn,LOW);
    digitalWrite(rup,LOW);
}
void LedIndicator::Nine(){
    digitalWrite(up,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(dwn,LOW);
    digitalWrite(rup,LOW);
}
void LedIndicator::Zero()
{
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(dwn,LOW);
    digitalWrite(up,LOW);
}
// For Symbols:
void LedIndicator::Off(){
    digitalWrite(rup,HIGH);
    digitalWrite(rdwn,HIGH);
    digitalWrite(mdl,HIGH);
    digitalWrite(lup,HIGH);
    digitalWrite(ldwn,HIGH);
    digitalWrite(up,HIGH);
    digitalWrite(dwn,HIGH);
        }
void LedIndicator::A(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(up,LOW);
}
void LedIndicator::b(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::C(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(up,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::d(){
    digitalWrite(rup,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::E(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(up,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::f(){
    digitalWrite(up,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
}

void LedIndicator::G(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(up,LOW);
    digitalWrite(dwn,LOW);
    digitalWrite(rdwn,LOW);
    
}

void LedIndicator::H(){
    digitalWrite(rup,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
}

void LedIndicator::J(){
    digitalWrite(rdwn,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::L(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::P(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(up,LOW);
    digitalWrite(mdl,LOW);
    digitalWrite(rup,LOW);
}

void LedIndicator::U(){
    digitalWrite(lup,LOW);
    digitalWrite(ldwn,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(dwn,LOW);
}

void LedIndicator::oUp(){
    digitalWrite(lup,LOW);
    digitalWrite(up,LOW);
    digitalWrite(rup,LOW);
    digitalWrite(mdl,LOW);
}

void LedIndicator::oDn(){
    digitalWrite(ldwn,LOW);
    digitalWrite(dwn,LOW);
    digitalWrite(rdwn,LOW);
    digitalWrite(mdl,LOW);
}
// Set pins as OUTPUT
void LedIndicator::PinsOut(){
    pinMode(up,OUTPUT);
    pinMode(mdl,OUTPUT);
    pinMode(dwn,OUTPUT);
    pinMode(lup,OUTPUT);
    pinMode(ldwn,OUTPUT);
    pinMode(rup,OUTPUT);
    pinMode(rdwn,OUTPUT);
}

// Use this function for printing numbers:
void LedIndicator::LedIndicator::PrintNum(int i)
{
        
        switch(i)
        {
            case 0: Zero();break;
            case 1: One(); break;
            case 2: Two(); break;
            case 3: Three(); break;
            case 4: Four(); break;
            case 5: Five(); break;
            case 6: Six();break;
            case 7: Seven();break;
            case 8: Eight();break;
            case 9: Nine();break;
        }
    

}
