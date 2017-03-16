//An example program to explain working of default arguments

/* Important observations: 
1.If first argument is not passed and also if type of argument is not 
specified(as shown in this example) then compiler tries to convert the 
passed argument to the type of first parameter. It results in unexpected 
results. 
To solve this problem we need to pass arguments in the order as specified
in the function prototype. */

#include <iostream>

using namespace std ;

//function declaration
void display(int = 5, char = '=', float = 8.8) ;

int main(){
	//variable declaration
	float floatValue = 6.9 ;
	
	//display default values
	cout << "---------------------------------------------------------------------" << endl ;
	cout << "Default values of parameters: int(5), char(=), float(8.8)" << endl ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	//function calls
	//case 1
	cout << "No arguments passed: " << endl ;
	cout << "Expected: =8.8=8.8=8.8=8.8=8.8" << endl << "Actual  : ";
	display() ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	//case 2
	cout << "One int(10) type of argument is passed: " << endl ;
	cout << "Expected: =8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8" << endl << "Actual  : ";
	display(10) ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	//case 3
	cout << "One char(*) type of argument is passed: " << endl ;
	cout << "Expected: *8.8*8.8*8.8*8.8*8.8" << endl << "Actual  : ";
	display('*') ;
	cout << "Reason: * ASCII value(42) is used as int type." << endl ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	//case 4
	cout << "One float(6.9) type of argument is passed: " << endl ;
	cout << "Expected: =6.9=6.9=6.9=6.9=6.9" << endl << "Actual  : ";
	display(6.9) ;
	cout << "Reason: 6.9 float value is converted into int 6." << endl ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	//case 5
	cout << "Three arguments of type int(10), char(*)  float(6.9) are passed: " << endl ;
	cout << "Expected: *6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9" << endl << "Actual  : ";
	display(10, '*', 6.9) ;
	cout << "---------------------------------------------------------------------" << endl ;
	
	return 0 ;
	
}

void display(int in, char ch, float fl){
	for(int i = 1; i <= in; i++){
		cout << ch << fl ;
	}
	cout << endl ;
}

/* Output:
---------------------------------------------------------------------
Default values of parameters: int(5), char(=), float(8.8)
---------------------------------------------------------------------
No arguments passed:
Expected: =8.8=8.8=8.8=8.8=8.8
Actual  : =8.8=8.8=8.8=8.8=8.8
---------------------------------------------------------------------
One int(10) type of argument is passed:
Expected: =8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8
Actual  : =8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8
---------------------------------------------------------------------
One char(*) type of argument is passed:
Expected: *8.8*8.8*8.8*8.8*8.8
Actual  : =8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8
=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8
=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8=8.8
Reason: * ASCII value(42) is used as int type.
---------------------------------------------------------------------
One float(6.9) type of argument is passed:
Expected: =6.9=6.9=6.9=6.9=6.9
Actual  : =8.8=8.8=8.8=8.8=8.8=8.8
Reason: 6.9 float value is converted into int 6.
---------------------------------------------------------------------
Three arguments of type int(10), char(*)  float(6.9) are passed:
Expected: *6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9
Actual  : *6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9*6.9
--------------------------------------------------------------------- */