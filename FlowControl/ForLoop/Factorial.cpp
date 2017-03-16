// Program to find a factorial of a number

#include <iostream>

using namespace std ;

int main(){
	//variable declarations
	int number, factorial = 1 ;
	
	//user input
	cout << "Enter a positive number to find the factorial" << endl ;
	cin >> number ;
	
	//calculate factorial
	for(int i = number; i >= 1; i--){
		factorial *= i ;
	}
	
	//display the result
	cout << "Factorial of the number: " << number << " is " << factorial ;
	
}