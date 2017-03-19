//Program to demonstrate usage of array

#include <iostream>

using namespace std ;

int main(){
	//array declaration without initialization
	int arr[5] ;
	
	//array initialization during declaration
	int arr2[5] = {1, 2, 3, 4, 5} ;
	
	//another way of initializing array
	int arr3[] = {1, 2, 3, 4, 5} ;
	
	//inserting elements in an array
	arr[0] = 5 ;
	arr[1] = 4 ;
	arr[2] = 3 ;
	arr[3] = 2 ;
	arr[4] = 1 ;
	
	//printing one element
	cout << "Array arr2 elements: " << endl ;
	cout << " " << arr2[0] ;
	cout << " " << arr2[1] ;
	cout << " " << arr2[2] ;
	cout << " " << arr2[3] ;
	cout << " " << arr2[4] << endl ;
	
	//print all elements in an array
	cout << "Array arr elements: " << endl ;
	for(int i = 0; i < 5; i++){
		cout << " " << arr[i] ;
	}
}