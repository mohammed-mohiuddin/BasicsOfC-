/* Program to explain the consept of passing strings created 
using character array and string class */

#include <iostream>
using namespace std ;

void display(char[]) ;

int main(){
	// c-style array declaration
	char charArray[150] ;
	
	//user input
	cout << "Please, enter your own quote " << endl ;
	cin.get(charArray, 150) ;
	
	//display results
	display(charArray) ;
	return 0 ;
	
}

//display accepts char array(string) and prints the contents of the strig to the console.
void display(char charArr[]){
	
	cout << "You have entered: " << charArr << endl ;
	
}

/* Output:
--------------------------------------------------------------------------------------------------------
Please, enter your own quote
Life is short, do something productive to yourself(happiness/satisfaction) or society.
You have entered: Life is short, do something productive to yourself(happiness/satisfaction) or society.
-------------------------------------------------------------------------------------------------------- */