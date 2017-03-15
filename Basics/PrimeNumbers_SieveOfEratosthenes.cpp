// Sieve of Eratosthenes Algorithm

/* Given a number n, print all prime smaller than or equal to n. 
It is also given that n is a small number.
For example, if n is 10, the output should be “2, 3, 5, 7”. 
If n is 20, the output should be “2, 3, 5, 7, 11, 13, 17, 19”. */

/* If we want to find all prime numbers below a given number(X).
We have list of possible numbers in the range 2 to X. We have the
following clues.
1. To check whether number is prime or not, it is sufficient to
in the range from 2 to square root of X.
2. If we know a number is prime, we can say all its multiples
are not prime.
Approach:
1. Create a boolean array. Initially mark all elements as true
(all are prime).
2. Loop over the possible values from 2 to sqrt(X). 
3. If current element is false, it is a prime. Mark all multiples of this
prime as false. Repeat step 3 untill you don't find any prime left. 
*/

#include <bits/stdc++.h>

using namespace std ;

void SieveOfEratosthenes(int number)
{	
	//variable declarations
	bool primes[number];
	
	//intialize the all array elements with true
	memset(primes, true, sizeof(primes) );
	
	//loop for numbers in range 2 to square root of given number
	for( int p = 2; p * p <= number; p++){
		
		//if current element is not marked false, it is a prime.
		if( primes[p] == true){
			
			//mark all multiples of current prime as false.
			for( int i = p * 2; i <= number; i += p){
				primes[i] = false ; 
			}
		}
	}
	
	//loop over all possible prime numbers.
	for(int i = 2; i <= number; i++){
		
		//if its not marked false, then display it.
		if(primes[i]){
			cout << " " << i ;
		}
	}
}

int main(){
	//variable declaration
	int number ;
	
	//user input
	cout << "Enter a positive number: " << endl ;
	cin >> number ;
	
	//call function to display prime numbers below given number
	SieveOfEratosthenes(number);
	return 0;
}

