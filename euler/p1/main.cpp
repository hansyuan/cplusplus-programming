// io print statements and shorten namespace
#import <iostream>
using namespace std;

#import "p1.cpp"
#import <list>
#import <set>

/* 
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */ 

// Mostly used the Python for now
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


// Get a list of thirds and fifths under a thousand. 
// Put them into a set to get unique multiples. 
// Sum the ints within the set together.
int main() {
  
  cout << "Hello world. " << endl;

  // Get list of 3's and 5's.
  auto thirds = multiples_comprehended(3, 1000);
  auto fifths = multiples_comprehended(5, 1000);


  // Now we only want the unique ints.
  set<int> unique_mults;

  for (int m: thirds){
    unique_mults.insert(m);
  }
  
  for (int m: fifths){
    unique_mults.insert(m);
  }

  
  // Reduce them together.
  int sum = 0;
  set<int>::iterator it1, it2;

  for (it1 = unique_mults.begin(); it1 != unique_mults.end(); it1++){
    sum += *it1;
  }

  cout << sum << endl;  
	return 0;
}
