// Program to generate fibonacci series upto specified number of terms
// Fibonacci series of a number(5) = 0, 1, 1, 2, 3. Every element is the sum
// of two element before it. First two elements are fixed i.e. 0 and 1.

#include <iostream>

using namespace std;

int main(){
	//variable declaration
	int number, firstElement = 0, secondElement = 1, currentElement, index = 3;
	
	//user input
	cout << "Please enter the number of terms or elements: " << endl ;
	cin >> number ;
	
	//validate user input
	if ( number <= 0 ) {
		do {
			cout << "Please enter a positive integer: " << endl ;
			cin >> number ;
		}
		while(number <= 0);
	}
	
	//display predefined first element
	if(number >= 1){
		cout << "The elements are: " << endl ;
		cout << " " << firstElement << endl ;
	}
	
	//display predefined second element
	if (number >= 2){
		cout << " " << secondElement << endl ;
	}
	
	//display the remaining elements
	while (index <= number){
		currentElement = firstElement + secondElement ;
		cout << " " << currentElement << endl;
		firstElement = secondElement ;
		secondElement = currentElement ;
		index++ ;
	}
	
	return 0;
}