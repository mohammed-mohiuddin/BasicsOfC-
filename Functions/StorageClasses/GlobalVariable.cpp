/* Every variable in C++ has two important properties.
1. Type (int, float, char etc.).
2. Storage Classes: Based on the type of storage the lifetime
and scope of a variable is decided. Five storage classes in
C++ are as follows
--------------------------------------------------------------
1. Local Variable: Defined inside the body of a function.

lifetime: Is available only when the function is running.
scope   : Limited to the function in which it is defined.
--------------------------------------------------------------
2. Global Variable: variable declared outside of all functions.

lifetime: Till the program is running.
scope   : Available to all functions.
--------------------------------------------------------------
3. Static Local Variable: declared inside of a function using
the keyword "static".

lifetime: Till the program is running.
scope   : Limited to the function in which it is defined.
--------------------------------------------------------------
4. Thread Local Variable: Separate instance of the variable is
for each thread.

lifetime: Starts when the function in which the thread local
		  variable is declared is called. End when the program 
		  exits. It is declared using "thread_local" keyword.
scope   : Limited to the function in which it is defined.
--------------------------------------------------------------
5. Register(deprecated) Variable: As the name suggests, these
variables are stored in registers if available. Declared using
the keyword "register".

lifetime: Till the function is running.
scope   : Limited to the function in which it is defined.
-------------------------------------------------------------- */

//Program to explain the working of global variable.

#include <iostream>

using namespace std ;

//function prototype
void printVariable() ;

int globalVariable = 77;

int main(){
	
	//displays 77
	cout << "Current global variable value in main(): " << globalVariable << endl ;
	
	//increase global variable value by 10.
	globalVariable += 10;
	
	//displays 87
	cout << "Global variable value after increment in main(): " << globalVariable << endl ;
	
	//function call
	printVariable() ;
	
	return 0;
}

void printVariable(){
	//displays 87
	cout << "Current global variable value in printVariable(): " << globalVariable << endl ;
	
	//increase global variable value by 10.
	globalVariable += 10;
	
	//displays 97
	cout << "Global variable value after increment in printVariable(): " << globalVariable << endl ;
}

/* Output:
----------------------------------------------------------------
Current global variable value in main(): 77
Global variable value after increment in main(): 87
Current global variable value in printVariable(): 87
Global variable value after increment in printVariable(): 97
----------------------------------------------------------------- */