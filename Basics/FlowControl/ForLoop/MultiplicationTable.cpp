// Program to generate multiplication table of a number

#include <iostream>

using namespace std ;

int main(){
	//variable declaration
	int times, number ;
	
	//user input
	cout << "Enter a positive number: " << endl ;
	cin >> number ;
	
	//display table
	for(int i = 1; i <= 10; i++){
		cout << number << " * " << i << " = " << number * i << endl ;
	}
}