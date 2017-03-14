// Program to find largest number in four numbers

#include <iostream>

using namespace std;

int main(){
	//variable declaration
	int number1, number2, number3, number4;
	int maximum, max1, max2 ;
	
	//user input
	cout << "Enter 4 integers" << endl ;
	cin >> number1 >> number2 >> number3 >> number4 ;
	
	//find the maximum value in 3 steps
	// 1st step: find maximum number of first 2 numbers	
	if ( number1 >= number2 ){			
		max1 = number1 ;
	}
	else{
		max1 = number2 ;
	}
	//2nd step: find maximum number of second 2 numbers
	if( number3 >= number4 ){
		max2 = number3 ;
	}
	else{
		max2 = number4 ;
	}
	
	//3rd step: find maximum number from the 2 maximums selected from step1 and step2 
	if( max1 >= max2 ){
		maximum = max1 ;
	}
	else{
		maximum = max2 ;
	}
	
	//display the results
	cout << "The maximum numnber is: " << maximum ;
}