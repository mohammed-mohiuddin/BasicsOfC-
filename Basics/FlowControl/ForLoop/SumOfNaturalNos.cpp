// Program to find sum of natural numbers

#include <iostream>

using namespace std ;

int main(){
	//variable declarations
	int number, sum = 0 ;
	
	//user input
	cout << "Enter a positive number" << endl ;
	cin >> number ;
	
	//calculate factorial
	for(int i = number; i >= 1; i--){
		sum += i ;
	}
	
	//display the result
	cout << "Sum of the natural numbers upto: " << number << " is: " << sum ;
	
}