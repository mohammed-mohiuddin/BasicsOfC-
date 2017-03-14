// Program to check whther a number positive, negative or zero.

#include <iostream>
#include<queue>

using namespace std;

int main(){
	//variable declaration
	int number;
	
	//user input
	cout << "Please Enter a number: " << endl ;
	cin >> number ;
	
	//check whether the number is positive, negative or zero.
	if( number > 0){
		cout << "Number is positive." << endl ;
	}
	else if( number < 0 ){
		cout << "Number is negative." << endl ;
	}
	else{
		cout << "Number is zero." << endl ;
	}
	
}
