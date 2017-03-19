/* There are two types of strings in C++.
1. string class objects:
2. C-strings: C-strings are arrays of char that end
with null terminator /0. So, the length of the array
is one more than the elements.
*/

#include <iostream>
using namespace std;

int main(){
	char strChar[30] ;
	
	cout << "Different ways of defining arrays in C-strings: " << endl ;
	//intialie arrays without specifying no of elements
	char strWithoutSize[] = "Mohiuddin" ;
	char individualWithoutSize[] = {'M', 'o', 'h', 'i','u', 'd','d', 'i','n', '\0'} ;
	
	//intialie arrays by specifying no of elements
	char str[10] = "Mohiuddin" ;
	char individual[10] = {'M', 'o', 'h', 'i','u', 'd','d', 'i','n', '\0'} ;
	
	for(int i = 0; i < 10; i++){
		cout << strWithoutSize[i] << " " << individualWithoutSize[i] << " " << str[i] << " " << individual[i] << endl ;
	}
	cout << "----------------------------------------------" << endl ;
	
	cout << "Enter a string " << endl ;
	cin >> strChar ;
	cout << "You have entered " << strChar << endl ;
}

/* Output:
-----------------------------------------------
Different ways of defining arrays in C-strings:
M M M M
o o o o
h h h h
i i i i
u u u u
d d d d
d d d d
i i i i
n n n n

----------------------------------------------
Enter a string
Mohammed Mohiuddin
You have entered Mohammed
---------------------------------------------- */