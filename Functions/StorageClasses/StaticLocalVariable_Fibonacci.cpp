/*
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

//Program to explain the working of static local variable.

#include <iostream>

using namespace std ;

int getNxtFibonacciNo() ;

int main(){
	int number, value ;
	
	cout << "Enter number of fibonacci numbers to print: " << endl ;
	cin >> number ;

	for(int i = 1; i <= number; i++){
		
		value = getNxtFibonacciNo() ;
		cout << " " << value ;
	}
}

int getNxtFibonacciNo(){
	
	static int firstValue = 0, secondValue = 1, currentValue = 1, element = 1 ;
	//firstValue, secondValue, currentValue, element ;
	
	if(element == 1){
		element++;
		return firstValue ;
		
	}
	if(element == 2){
		element++;
		return secondValue ;
	}
	element++;
	currentValue = firstValue + secondValue ;
	firstValue = secondValue ;
	secondValue = currentValue ;
	
	return currentValue ;
	
}

/* Output:
-------------------------------------------------------------------------
Enter number of fibonacci numbers to print:
20
 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
-------------------------------------------------------------------------*/