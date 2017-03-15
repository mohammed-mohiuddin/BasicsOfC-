// Program to check if a number is prime or not

#include <iostream>
#include <math.h>

using namespace std ;

int main(){
	//variable declaration
	int number, i = 2 ;
	bool isPrime = true ;
	
	//user imput
	cout << "Enter a positive number " << endl ;
	cin >> number ;
	
	//if number is divisible by an number in the range from 2 to number/2
	//then it is not a prime number, else it is.
	while(i <= number / 2){
		i++ ;		
		if( number % i == 0 ){
			isPrime = false ;
			break ;
		}
	}
	
	//display the result
	if(isPrime == true){
		cout << "Given number: " << number << " is prime" << endl ;
	}
	else{
		cout << "Given number: " << number << " is NOT prime" << endl ;
	}
	return 0 ;
}