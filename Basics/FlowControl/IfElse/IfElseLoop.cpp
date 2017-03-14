#include<iostream>

using namespace std;

// Program to check if a given number is even or odd.	

int main(){
	// variable declaration
	int number;										
	
	// take input from user
	cout << "Please Enter Number: " << endl ;		
	cin >> number;
	
	// check if the number is even or odd
	if((number % 2) == 0){
		cout << "The number is even" << endl ;
	}
	else{
		cout << "The number is odd" << endl ;
	}
	
	// thank you message
	cout << "Thank You!" << endl ;
}