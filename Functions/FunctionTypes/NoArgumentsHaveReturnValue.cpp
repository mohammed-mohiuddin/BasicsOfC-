/* Functions can be divided into four types depending
on the arguments passed to the function and return value
returned by the function. They are, function with
1. No arguments and No return value.
2. With arguments but has No return value.
3. No arguments but has a return value.
4. With arguments as well as return value.
Here we shall see an example of a function having no arguments but have return value.*/


#include <iostream>

using namespace std;

//function declaration
float addNumbers();

//main method
int main(){
	//variable declaration
	float result ;
	
	//function call to addNumbers
	result = addNumbers();
	
	//display result
	cout << result ;
	
	return 0;
}

/*function definition. 
function doesn't take arguments and but returns float value. */
float addNumbers(){
	//variable declaration
	float number1, number2 ;
	
	//user input
	cout << "Enter two numbers to add" << endl ;
	cin >> number1 >> number2 ;
	
	cout << number1 << " + " << number2 << " = " ;
	
	//return sum
	return number1 + number2 ;
}


/* Output:
------------------------------------------------------------
Enter two numbers to add
12 13
12 + 13 = 25
------------------------------------------------------------
Enter two numbers to add
-25 50
-25 + 50 = 25
------------------------------------------------------------ */