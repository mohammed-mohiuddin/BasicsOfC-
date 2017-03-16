/* Program to demonstrate the point that we cannot miss a default
argument in between two defined default documents. In short, all the
default parameters should be at the end of the signature in function
prototype. */

#include <iostream>

using namespace std ;

//function declaration
void display(int = 1, char, float = 17.17) ;

int main(){
	
	//function call
	display(11, 'a', 13.13) ;
}

//function definition
void display(int a, char b, float c){
	cout << a << " " << b << " " << c ;
}

/* Output:
----------------------------------------------------------------------------------
error: default argument missing for parameter 2 of 'void display(int, char, float)'
void display(int = 1, char, float = 17.17) ;
----------------------------------------------------------------------------------*/