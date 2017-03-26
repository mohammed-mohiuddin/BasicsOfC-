/* Program to demonstrate the relation between pointers and arrays. 
Observations: Though we can access the address and value using either
pointer or array. It is better to use
1. pointer to array, in a situation we want to deal with addresses.
It looks obvious right ? Yes it makes the code easier to understand.
2. arrays, when we want to just deal with contents of the array. */


#include <iostream>
using namespace std ;

//methods to print address and content of an array
void printAddress(int *p, int[5]) ;
void printElements(int *p, int[5]) ;

int main(){
	//declare and initialize integer pointer and integer array
	int *ptr, arr[] = {1, 2, 3, 4, 5} ;
	ptr = &arr[0] ;
	
	//call print functions to print address and contents of array
	printAddress(ptr, arr) ;
	printElements(ptr, arr) ;
	
}

//method to print address of array elements and pointer
void printAddress(int *p, int arr[5]){
	cout << "Printing addresses using pointer: " << endl ;
	for(int i = 0; i < 5; i++){
		cout << "Address of " << i + 1 << " element is: " << p + i << endl ;
	}
	
	cout << "Printing addresses using array: " << endl ;
	for(int i = 0; i < 5; i++){
		cout << "Address of " << i + 1 << " element is: " << &arr[i] << endl ;
	}
}

//method to print the contents of the array and values pointed by the pointer 
void printElements( int *p, int arr[5]){
	cout << "Accessing elements using pointer: " << endl ;
	for(int i = 0; i < 5; i++){
		cout << "Value of " << i + 1 << " element is: " << *(p + i) << endl ;
	}
	
	cout << "Accessing elements using array: " << endl ;
	for(int i = 0; i < 5; i++){
		cout << "Value of " << i + 1 << " element is: " << arr[i] << endl ;
	}
}

/* Output:
-----------------------------------------------------
Printing addresses using pointer:
Address of 1 element is: 0x61ff18
Address of 2 element is: 0x61ff1c
Address of 3 element is: 0x61ff20
Address of 4 element is: 0x61ff24
Address of 5 element is: 0x61ff28
Printing addresses using array:
Address of 1 element is: 0x61ff18
Address of 2 element is: 0x61ff1c
Address of 3 element is: 0x61ff20
Address of 4 element is: 0x61ff24
Address of 5 element is: 0x61ff28
Accessing elements using pointer:
Value of 1 element is: 1
Value of 2 element is: 2
Value of 3 element is: 3
Value of 4 element is: 4
Value of 5 element is: 5
Accessing elements using array:
Value of 1 element is: 1
Value of 2 element is: 2
Value of 3 element is: 3
Value of 4 element is: 4
Value of 5 element is: 5
------------------------------------------------------ */