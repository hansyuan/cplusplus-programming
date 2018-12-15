// io print statements and shorten namespace
#import <iostream>
using namespace std;

#import "p1.cpp"
#import <list>

/* 
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */ 

list<int> multiples_comprehended(int multiple, int max){

  list<int> ints;
  int curr = 0;

  Multiples mults = Multiples(multiple, multiple); 
  while (true) {
    curr = mults.getNextInt();

    if (curr < max) {
      ints.push_back(curr);
    }
    else{
      break;
    }
  }
  return ints;
}

int main() {
  
  cout << "Hello world. " << endl;

  // Get list of 3's and 5's.
  auto thirds = multiples_comprehended(3, 1000);

  for (int c: thirds){
    cout << c << endl;
  }

  

	return 0;
}
