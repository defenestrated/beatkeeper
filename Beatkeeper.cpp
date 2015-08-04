/*

  Beatkeeper library
  ==================
  a libary for keeping metronomic time and sequencing cyclical events
  created by sam galison and paul myoda, summer 2015

*/

#include "Arduino.h"
#include "Beatkeeper.h"

Beatkeeper::Beatkeeper(int _numnotes) {

}

/* void Beatkeeper::set(int val) { */
/*   _val = val; */
/*   Serial.print("value set: "); */
/*   Serial.println(_val); */
/* } */

/* void Beatkeeper::check() { */
/*   Serial.println("checking: "); */
/*   Serial.println(_val); */
/* } */

/* void Beatkeeper::beat() { */
/*   Serial.print("beat "); */
/*   Serial.println(beats); */
/* } */

/* void Beatkeeper::bar() { */
/*   Serial.print("bar "); */
/*   Serial.println(bars); */
/* } */

/* void Beatkeeper::measure() { */
/*   Serial.print("measure "); */
/*   Serial.println(); */
/* } */

Pattern::Pattern () {
}

void Pattern::set(int whichpin, String p) {
  _led = whichpin;
  thepattern = p;
  /* Serial.print("pattern set for led at pin "); */
  /* Serial.print(_led); */
  /* Serial.print(": "); */
  /* Serial.println(thepattern); */
}

String Pattern::print() {
  return thepattern;
}

void Pattern::advance() {
  if (counter < thepattern.length()-1) counter ++; // advance the pattern or restart
  else counter = 0;
}

void Pattern::display() {
  if (thepattern.charAt(counter) == '0') {
    // reads what's at that position in the pattern and checks if it's 0
    brightness = 255; // 255 for buckpucks
  }
  else brightness = 0;
  digitalWrite(_led, brightness);
}