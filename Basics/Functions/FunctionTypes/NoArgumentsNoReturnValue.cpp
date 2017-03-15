/* Functions can be divided into four types depending
on the arguments passed to the function and return value
returned by the function. They are, function with
1. No arguments and No return value.
2. With arguments but has No return value.
3. No arguments but has a return value.
4. With arguments as well as return value.
Here we shall see an example of the no arguments and no return value.*/

#include <iostream>

using namespace std;

//function declaration
void addNumbers();

//main method
int main(){
	
	//function call to addNumbers
	addNumbers();
	return 0;
}

/*function definition. 
function doesn't take arguments and doesn't return any value. */
void addNumbers(){
	//variable declaration
	float number1, number2, result ;
	
	//user input
	cout << "Enter two numbers to add" << endl ;
	cin >> number1 >> number2 ;
	
	//calculate sum
	result = number1 + number2 ;
	
	//display result
	cout << number1 << " + " << number2 << " = " << result ;
}

/* Output:
-----------------------------------------------------
Enter two numbers to add
12 13
12 + 13 = 25
-----------------------------------------------------
Enter two numbers to add
-25 50
-25 + 50 = 25
----------------------------------------------------- */