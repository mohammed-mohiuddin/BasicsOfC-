#include <iostream>

using namespace std;

int main() 
{	
	// variable declaration
	int number;
	
	// user input
	cout << "Program to check if a number is even" << endl ;
    cout << "Enter an integer: " << endl ;
    cin >> number;

    // checks if the number is divisible by 2
    if ( (number % 2) == 0) 
    {
        cout << "You have entered is divisible by 2: " << number << endl;
    }

    return 0;

}