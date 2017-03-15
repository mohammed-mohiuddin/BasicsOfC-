//An example of using built-in functions.

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	// pow(base, exponent): returns base raised to the power exponent. 
	cout << "10 power 2 = " << pow(10, 2) << endl ;
	
	// sqrt(number): returns square root of the number
	cout << "Square root of 25 = " << sqrt(25) << endl ;
	
	// log(number): returns the natural logarithm of number
	cout << "Natural logarithm of 2.718281828 = " << log(2.718281828) << endl ;
	
	//log10(number): Computes common(base-10) logarithm of number
	cout << "Common(base-10) logarithm of 100 = " << log10(100) << endl ;

	return 0;
	
}

/* Output:
10 power 2 = 100
Square root of 25 = 5
Natural logarithm of 2.718281828 = 1
Common(base-10) logarithm of 100 = 2 */