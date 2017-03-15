//Function overloading example program

#include <iostream>

using namespace std;

//function declarations
void display(int) ;
void display(float);
void display(int, float) ;
void display(float, int) ;

int main(){
	//variable declaration
	int integerValue = 10 ;
	float floatValue = 100.001 ;
	
	//call overloaded methods
	cout << "function call with one argument: integer " << endl ;
	display(integerValue) ;
	cout << "function call with one argument: float " << endl ;
	display(floatValue) ;
	cout << "function call with two arguments: integer, float " << endl ;
	display(integerValue, floatValue) ;
	cout << "function call with two arguments: float, integer " << endl ;
	display(floatValue, integerValue) ;
	
	return 0;	
}

//function definitions
void display(int a){
	cout << "First display function: " << endl ;
	cout << "Integer Value: " << a << endl ;
}

void display(float b){
	cout << "Second display function: " << endl ;
	cout << "Float Value: " << b << endl ;
}

void display(int c, float d){
	cout << "Third display function: " << endl ;
	cout << "First argument of function is: " << c << endl ;
	cout << "Second argument to the function is: " << d << endl ;
}

void display(float e, int f){
	cout << "Fourth display function: " << endl ;
	cout << "First argument of function is: " << e << endl ;
	cout << "Second argument to the function is: " << f << endl ;
}


/* Output:
-------------------------------------------------
function call with one argument: integer
First display function:
Integer Value: 10
function call with one argument: float
Second display function:
Float Value: 100.001
function call with two arguments: integer, float
Third display function:
First argument of function is: 10
Second argument to the function is: 100.001
function call with two arguments: float, integer
Fourth display function:
First argument of function is: 100.001
Second argument to the function is: 10 
-------------------------------------------------*/