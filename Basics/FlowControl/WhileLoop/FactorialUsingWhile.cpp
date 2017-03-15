// Program to find a factorial of a number
// factorial of a number = 1 * 2 * 3....number

#include <iostream>

using namespace std ;

int main(){
	//variable declarations
	int number, index =1, factorial = 1 ;
	
	//user input
	cout << "Enter a positive number to find the factorial" << endl ;
	cin >> number ;
	
	//calculate factorial
	while ( index <= number){
		factorial *= index ;
		index += 1 ;
	}
	
	//display the result
	cout << "Factorial of the number: " << number << " is " << factorial ;
	
}