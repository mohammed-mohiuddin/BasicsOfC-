/* Program to demonstrate the usage of pass by reference.
Passing by reference is like substituting the address of
the variables as arguments to the the functions. Following
points need to be considered while using pass by reference.
1. There is no diffference in the function call. We just pass
the names of varaibles.
2. Function declaration and definition are changed. Apart
from specifying data type and variable names we need to
add the & symbols before variable names. */

#include<iostream>
using namespace std;

//note the & symbol before symbols
void swap(int &a, int &b);

int main()
{
	//variable declaration
    int a = 11, b = 22;
	
	//display a and b before swapping
    cout << "Value before swapping: " << endl;
    cout << "a, b are: " << a << ", " << b << endl;
	
	/*function call, note the arguments are normal variable
	names without & */
    swap(a, b);
	
	//display a and b after swapping
    cout << "Value after swapping numbers: " << endl;
    cout << "a, b are: " << a << ", " << b << endl ;
    return 0;
}

//note the & symbol before varaibles
void swap(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}

/* Output:
-------------------------------------------------------
Value before swapping:
a, b are: 11, 22
Value after swapping numbers:
a, b are: 22, 11
-------------------------------------------------------