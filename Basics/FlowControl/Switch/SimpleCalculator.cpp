//Program to perform basic operations (+, -, *, /)

#include <iostream>

using namespace std;

int main(){
	//variable declarations
	char ch;
	int number1, number2;
	
	//user input
	cout << "Select the operator from +, -, * and /" << endl ;
	cin >> ch ;
	
	cout << "Enter two numbers" << endl ;
	cin >> number1 >> number2 ;
	
	//Execute selected block of code, depending on the user preferences.
	switch(ch){
		case '+':
			cout << "Sum of given numbers: " << number1 + number2 ;
			break ;
		case '-':
			cout << "Difference of the given numbers: " << number1 - number2 ;
			break ;
		case '*':
			cout << "Product of given numbers: " << number1 * number2 ;
			break ;
		case '/':
			cout << "Division of given numbers: " << number1 / number2 ;
			break ;
		default:
			cout << "Error! Operator is not correct" ;
	}
	
	return 0 ;
}