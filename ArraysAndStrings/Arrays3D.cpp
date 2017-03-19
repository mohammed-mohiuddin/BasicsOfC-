//Program to illustrate the conspet of 3D arrays.

#include <iostream>
using namespace std;

int main(){
	int numbers[2][2][2] ;
	
	cout << "Enter 8 values: " << endl ;
	
	//Enter 8 values.
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cin >> numbers[i][j][k] ;
			}
		}
	}
	
	cout << "numbers Names" << endl ;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 2; k++){
				cout << "Address: numbers[" << i << "][" << j << "][" << k << "] = " << numbers[i][j][k] << endl ;
			}
		}
	}
	
}

/* Output:
---------------------------------------------
Enter 8 values:
1
2
3
4
5
6
7
8
Residents Names
Address: residents[0][0][0] = 1
Address: residents[0][0][1] = 2
Address: residents[0][1][0] = 3
Address: residents[0][1][1] = 4
Address: residents[1][0][0] = 5
Address: residents[1][0][1] = 6
Address: residents[1][1][0] = 7
Address: residents[1][1][1] = 8
-------------------------------------------- */