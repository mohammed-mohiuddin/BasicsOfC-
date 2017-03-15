//Program to compute absolute value of a number.

#include <iostream>

using namespace std;

//function declarations
int absolute(int) ;
float absolute(float) ;

int main(){
	//variable declarations
	int intValue = -10 ;
	float floatValue = -100.001 ;
	
	//function calls
	cout << "Function call with one integer value: " << intValue << endl ;
	cout << absolute(intValue) << endl ;
	cout << "Function call with one float value: " << floatValue << endl ;
	cout << absolute(floatValue) << endl ;
	
	return 0;
}

int absolute(int integer){ 
	cout << "From absolute method with one integer argument: " ;
	if(integer < 0){
		integer = -integer ;
	}
	return integer ;
}

float absolute(float fractional){
	cout << "From absolute method with one float argument: " ;
	if(fractional < 0){
		fractional = -fractional ;
	}
	return fractional ;
}

/* Output:
--------------------------------------------------------
Function call with one integer value: -10
From absolute method with one integer argument: 10
Function call with one float value: -100.001
From absolute method with one float argument: 100.001
-------------------------------------------------------- */