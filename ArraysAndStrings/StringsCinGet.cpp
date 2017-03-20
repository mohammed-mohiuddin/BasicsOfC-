// Program to demonstrate the usage of cin.get.

#include <iostream>
using namespace std ;

int main(){
	//variable declaration.
	char userInput[30] ;
	
	//user input.
	cout << "Please enter a string " << endl ;
	cin.get(userInput, 30) ;
	
	//display entered data.
	cout << "You have entered: " << userInput ;
}

/* Output:
------------------------------------------------
Please enter a string
Mohammed Mohiuddin
You have entered: Mohammed Mohiuddin
------------------------------------------------ */