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

/* Output:
--------------------------------------------------
Select the operator from +, -, * and /
+
Enter two numbers
10
12
Sum of given numbers: 22
--------------------------------------------------
Select the operator from +, -, * and /
*
Enter two numbers
10 11
Product of given numbers: 110
--------------------------------------------------
Select the operator from +, -, * and /
-
Enter two numbers
20, 10
Difference of the given numbers: 20
--------------------------------------------------
Select the operator from +, -, * and /
/
Enter two numbers
20 2
Division of given numbers: 10
-------------------------------------------------- */