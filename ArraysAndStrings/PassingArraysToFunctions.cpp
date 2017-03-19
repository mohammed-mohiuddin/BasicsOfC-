//Program to explain on passing arrays to functions

#include <iostream>
using namespace std ;

//functions declaration
int getSum1D(int[5]) ;
int getSum2D(int[5][2]) ;

int main(){
	//array declaration and initialisation
	int array1D[] = {1, 2, 3, 4, 5} ;
	int array2D[5][2] = {
		{1, 2},
		{3, 4},
		{5, 6},
		{7, 8},
		{9, 10}
	};
	
	//function calls
	getSum1D(array1D) ;
	getSum2D(array2D) ;
	
	return 0;
	
}

// method to calculate sum of 1 dimensional array
int getSum1D( int arr[5]){
	int sumOfArr = 0 ;
	cout << "Elements of 1D Array: " << endl ;
	for(int i = 0; i < 5; i++){
			cout << " " << arr[i] ;
			sumOfArr += arr[i] ;
	}
	cout << "\nSum of 1D Array = " << sumOfArr << endl ; 
}

// method to calculate dimensional array
int getSum2D( int arr[5][2]){
	int sumOfArr = 0 ;
	cout << "Elements of 2D Array: " << endl ;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 2; j++){
			cout << " " << arr[i][j] ;
			sumOfArr += arr[i][j] ;
		}
	}
	cout << "\nSum of 2D Array = " << sumOfArr ; 
}

/* Output:
-------------------------------------------
Elements of 1D Array:
 1 2 3 4 5
Sum of 1D Array = 15
Elements of 2D Array:
 1 2 3 4 5 6 7 8 9 10
Sum of 2D Array = 55
------------------------------------------- */