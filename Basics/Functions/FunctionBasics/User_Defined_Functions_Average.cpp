//Program to calculate average of three numbers

#include <iostream>

using namespace std;

//function prototype (declaration)
float average(float, float, float);

int main(){
	//variable declarations
	float number1, number2, number3, mean;
	cout << "Enter three numbers to take average " << endl ;
	cin >> number1 >> number2 >> number3 ;
	
	//function call
	mean = average(number1, number2, number3);
	
	//display average
	cout << "Average of the numbers: " << number1 << " " 
	<< number2 << " " << number3 << " is " << mean ;
}

//function definition
float average(float num1, float num2, float num3){
	return (num1 + num2 + num3) / 3 ;
}

/* Output:
Enter three numbers to take average
10 11 12
Average of the numbers: 10 11 12 is 11 */