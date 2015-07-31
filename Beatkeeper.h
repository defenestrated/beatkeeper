/*

  Beatkeeper library
  ==================
  a libary for keeping metronomic time and sequencing cyclical events
  created by sam galison and paul myoda, summer 2015

*/

#ifndef Beatkeeper_h
#define Beatkeeper_h

#include "Arduino.h"

class Beatkeeper {

 public:
  Beatkeeper (int numnotes);
  void set(int val);
  void check();
  void beat();
  void bar();
  void measure();
  int *notes;
  /* int numnotes, ticks, beats, bars; */


 private:
  int _val;

};

class Pattern {
 public:
  Pattern ();

  int counter = 0, brightness;
  String thepattern;

  void set(int p, String s);
  void advance();
  void display();
  String print();

  /* int length = 0; */
  int *sequence;
 private:
  int _led;
};

#endif
