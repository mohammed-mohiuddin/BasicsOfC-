// Ternery Operator example

#include <iostream>

using namespace std;

int main(){
	// declaration
	int number;
	
	//user input
	cout << "Enter a number: " << endl ;
	cin >> number ;
	
	//check whether the number is even or odd
	string message = ( (number % 2) == 0) ? "Given number is even" : "Given number is odd" ;
	
	//print result
	cout << message ;
}