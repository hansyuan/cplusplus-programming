// Remembering how C++ works. Written in gvim. 
// Compiled on a Macbook. No IDEs (that's cheating)
 
/* 
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */ 

class Multiples {

	private:
    // Iterator generates the next int. 
    int currInt;
    int multiplier;

  public:
    Multiples(int mult, int start);
    int getNextInt();
    
	
};


