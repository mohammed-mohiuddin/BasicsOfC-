/* Continue Introduction: It can be used skip selected parts of 
the loops body. Normally it is used inside the body of a conditional
statement. */

/* Program print a sequence of numbers skiping selected numbers.
Suppose we want to print numbers between 1 and 20 which are not
divisible by 2. */

#include <iostream>

using namespace std;

int main(){
	
	for(int i = 1; i <= 20; i++){
		if( i%2 == 0 ){
			continue ;
		}
		cout << i << "\t" ;
	}
}