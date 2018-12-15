// See the header file for comments about intent. 

#import "p1.hpp"


// Multiples contructor. 
Multiples::Multiples(int mult, int start) {
  currInt = start;
  multiplier = mult;
}

// Getter and incrementor, essentially behaves like an iterator.
int Multiples::getNextInt(){
  int retInt = currInt; 
  currInt += multiplier;
  return retInt;
}

