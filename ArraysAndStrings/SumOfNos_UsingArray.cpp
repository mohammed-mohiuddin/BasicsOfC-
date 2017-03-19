// Program to calculate sum of 4 numbers

#include <iostream>

using namespace std ;

int main(){
	float number, sum = 0 ;
	
	cout << "Please enter 4 numbers: " << endl ;
	for(int i = 0; i < 4; i++){
		cin >> number ;
		sum += number ;
	}
	
	cout << "Sum of given numbers is: " << sum ;
}

/* Output:
---------------------------------------------------
Please enter 4 numbers:
1 2 3 4
Sum of given numbers is: 10
--------------------------------------------------- */