/* Variables in C++ store a value in a memory location.
Varible itself gives the value stored. Where as to access
the location, we need to use the reference variable &.
Suppose a declaration "int a = 10 ;. a stores value of 10.
&a gives the memory location of the variable.*/

#include <iostream>
using namespace std ;

int main(){
	//variable declaration
	int a ;
	float b ;
	int c ;
	float d ;
	
	//print memory address of variables
	cout << &a << endl ;
	cout << &b << endl ;
	cout << &c << endl ;
	cout << &d << endl ;
	
}

/* Output:
--------------------------
0x61ff1c
0x61ff18
0x61ff14
0x61ff10
-------------------------- */