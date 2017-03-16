//An example of switch

#include <iostream>

using namespace std ;

int main(){
	//variable declaration
	int value;
	
	//user input
	cout << "Please enter 1 or 2 or 3 or 4 " << endl ;
	cin >> value ;
	
	/* depending on the condition(value), corresponding block of code
	 is executed. If break is not used the condition is checked for all
	 the remaining cases. */
	switch(value){
		case 1:
			cout << "You have entered 1" << endl ;
			break ;
		case 2:
			cout << "You have entered 2" << endl ;
			break ;
		case 3:
			cout << "You have entered 3" << endl ;
		case 4:
			cout << "You have entered  4" << endl ;
			break ;
		default:
			cout << "Error! You have not entered numbers between 1 and 4 " << endl ;
	}
	
	return 0 ;
}