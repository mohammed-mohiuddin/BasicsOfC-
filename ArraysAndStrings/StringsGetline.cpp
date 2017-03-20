// Program to demonstrate the usage of getline function.

#include <iostream>
using namespace std ;

int main(){
	// string class object creation
	string strCreatedByStringClass ;
	
	// take user input
	cout << "Please enter some text" << endl ;
	getline(cin, strCreatedByStringClass) ;
	
	// display the entered text
	cout << "You have entered: " << strCreatedByStringClass ;
	
}

/* Output:
---------------------------------------------------
Please enter some text
Nothing is more addictive than confidence!!
You have entered: Nothing is more addictive than confidence!!
--------------------------------------------------- */