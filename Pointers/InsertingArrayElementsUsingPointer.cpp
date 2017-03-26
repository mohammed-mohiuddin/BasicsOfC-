//Program to insert elements using pointer and array notation

#include <iostream>
using namespace std ;

//function declarations
void insertElementsArray(int[5]) ;
void insertElementsPointer(int*) ;

int main(){
	//variables declarations
	int *p, arr[5] ;
	p = &arr[0] ;
	
	//function calls to insert elements using array notation and pointers
	insertElementsArray(arr) ;
	insertElementsPointer(p) ;
}

//method to insert array elements using array notation
void insertElementsArray(int arr[5]){
	cout << "Enter five integers: " << endl ;
	for(int i = 0; i < 5; i++){
		cin >> arr[i] ;
	}
	
	cout << "Inserted elements using array notattion " << endl;
	for(int i = 0; i < 5; i++){
		cout << arr[i] << " " ;
	}
	
	cout << endl ;
}

//method to insert array elements using pointers
void insertElementsPointer(int *ptr){
	cout << "Enter five integers: " << endl ;
	for(int i = 0; i < 5; i++){
		cin >> *(ptr + i) ;
	}
	
	cout << "Inserted elements using pointers " << endl;
	for(int i = 0; i < 5; i++){
		cout << *(ptr + i) << " " ;
	}
	
	cout << endl ;
}

/* Output:
-----------------------------------------------------
Enter five integers:
1 3 5 7 9
Inserted elements using array notattion
1 3 5 7 9
Enter five integers:
19 28 37 46 55
Inserted elements using pointers
19 28 37 46 55
----------------------------------------------------- */