// io print statements and shorten namespace
#import <iostream>
using namespace std;

#import "p1.cpp"


int main() {
  cout << "Hello world. " << endl;
  Multiples m = Multiples(5, 0);
  
  int i = 0;
  while (i < 1000){

    cout << m.getNextInt() << endl;
    i++;
  }

	return 0;
}
