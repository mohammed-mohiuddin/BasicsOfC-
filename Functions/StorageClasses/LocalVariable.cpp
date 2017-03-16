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

//Program to explain the working of local variable.

#include <iostream>

using namespace std;

//function prototype.
void display() ;

int main(){
	//variable declaration
	int varMain = 10 ;
	
	//access local variable
	cout << "Variable in main(), accessed in main(): " << varMain ;
	
	//function call.
	display() ;
	
	//access local variable of another method: illegal access.
	cout << "Variable in display(), accessed in main(): " << varDisplay ;
	
	return 0 ;
	
}

void display(){
	//variable declaration
	int varDisplay ;
	
	//access local variable
	cout << "Variable in display(), accessed in display(): " << varDisplay ;
}

/* Output:
-----------------------------------------------------------------------
error: 'varDisplay' was not declared in this scope
  cout << "Variable in display(), accessed in main(): " << varDisplay ;
----------------------------------------------------------------------- */