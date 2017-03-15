//Program to check if a number can be expressed as sum of two primes.

/* Steps: Given(number)
1. Iterate over the range 2:sqrt(number).
2. For each value(suppose x) check if it is prime. If it is a prime, then
check if the inverse(suppose y = number - x) is prime. If the inverse is 
also prime we can conclude that the given number can be expressed as the 
sum of two primes(x + y) 
3. If iteration doesn't find any combination, then we can declare that the
number cannot be expressed as the sum of two primes. */

#include <iostream>

using namespace std;

bool isPrime(int number);

int main(){
	//variable declaration
	int number ;
	
	//user input
	cout << "Please enter the number: " << endl ;
	cin >> number ;
	
	//Loop in the range of 2 to sqrt(number)
	for(int i = 2;  i * i <= number; ++i){
		
		//check if a value(i) between 2 and sqrt(number) is prime.
		if(isPrime(i)){
			
			//check if the inverse(number - i) of selected value(i) is prime.
			if(isPrime(number - i)){
				
				/* if both of the above conditions evaluate to true,
				we can display a positive message. */
				cout << "GIven number can be expressed as sum of 2 primes: " ;
				cout << number << " = " << i << " + " << number - i ;
				return 0 ;
			}
		}
	
	}
	cout << "The number cannot be expressed by the sum of two prime numbers" ;
	return 0; 
}

//method to check if a number is prime.
bool isPrime(int number){
	bool prime = true ;
	
	for(int i = 2; i * i <= number; ++i ){
		if(number % i == 0){
			prime = false ;
			break ;
		}
	}
	return prime ;
}

/* Output:
Please enter the number:
31
GIven number can be expressed as sum of 2 primes: 31 = 2 + 29

Please enter the number:
79
The number cannot be expressed by the sum of two prime numbers */