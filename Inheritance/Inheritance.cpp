/* Program to demonstrate the concept of inheritance. There are three
classes. One is base class and other two are child classes. Base class
(BasicMathOperations) has three methods:
1. addValues (add two integers, used by fact)

*/


#include <iostream>
using namespace std ;

//Base class 
class BasicMathOperations
{	
	//private members of class
	private:
		int val;
		int sum;
		int diff;
	
	//public members of class
	public:
		//default constructor
		BasicMathOperations(): val(1){
			cout << "==============================================" << endl ;
			cout << "BasicMathOperations class object is created " <<endl ;
			cout << "==============================================" << endl ;
		}
		
		//method to add values
		int addValues(int op1, int op2){
			return op1 + op2 ;
		}
		
		//method to substract values
		int substractValues(int op1, int op2){
			return op1 - op2 ;
		}
		
		//method to display sum and difference of two numbers
		void printSumAndDiff(int op1, int op2){
			sum = addValues(op1, op2);
			diff = substractValues(op1, op2);
			cout << "Sum of numbers: " << op1 << ", " << op2 << " is " << sum << endl;
			cout << "Difference of numbers: " << op1 << ", " << op2 << " is " << diff << endl;
		}
} ;


//derived class 1
class Factorial : public BasicMathOperations{
	//private members of class
	private:
		int n;
	
	//public members of class
	public:
		Factorial(): n(1){ 
			cout << "==============================================" << endl ;
			cout << "Factorial class object is created " <<endl ;
			cout << "==============================================" << endl ;
		}
		
		//method to multiply two numbers
		int multiply(int a, int b){
			int mul = 0;
			for(int i = 1; i <= b; i++){
				mul = addValues(mul, a) ;
			}
			return mul ;
		}
		
		//method to calculate factorial of a number
		int calculateFactorial(int n){
			int fact = 1;
			if(n == 1){
				return 1 ;
			}
			for(int i = 1; i < n; i++){
				fact = multiply(fact, i + 1) ;
			}
			return fact;
		}
		
		//method to display calculate and display factorial of number
		void printFactorial(int n){
			int value = calculateFactorial(n);
			cout << "Factorial of " << n << " is " << value << endl;
		}
		
} ;


//derived class 2
class FactorsOfANumber : public BasicMathOperations{
	//private members
	private:
		int n;
		int factors[10];
	
	//public members
	public:
		//default constructor
		FactorsOfANumber(): n(1){
			cout << "==============================================" << endl ;
			cout << "FactorsOfANumber class object is created " <<endl ;
			cout << "==============================================" << endl ;
		}
		
		//method to return remainder, after dividing the first operand by second
		int divide(int a, int b){
			while(a >= b){
				a = substractValues(a, b);
			}
			return a ;
		}
		
		//method to find factors of a number
		void findFactors(int n){
			int rem;
			factors[0] = 1;
			for(int i = 2; i <= 10; i++){
				rem = divide(n, i) ;
				if(rem == 0){
					factors[i-1] = 1;
				}
				else{
					factors[i-1] = 0;
				}
			}
		}
		
		//method to calculate and print factors of a number
		void printFactors(int n){
			findFactors(n);
			cout << "Factors of the number: " << n << " between 1 and 10 are " << endl ;
			for(int i = 0; i < 10; i++){
				if(factors[i]){
					cout << i + 1 << " " ;
				}
			}
			cout << endl ;
		}
	
} ;

//driver method, main
int main(){	
	//base class
	BasicMathOperations baseClassObject;			//create base class(BasicMathOperations) object
	baseClassObject.printSumAndDiff(20, 10);		//calculate and print sum and difference of 20 and 10
	cout << "----------------------------------------------" << endl ; 
	baseClassObject.printSumAndDiff(10, 20);		//calculate and print sum and difference of 10 and 20
	
	//derived class 1
	Factorial derivedClassOneObject;				//create derived class 1(Factorial) object
	derivedClassOneObject.printFactorial(5);		//print calculate and print factorial of 5
	cout << "----------------------------------------------" << endl ; 
	derivedClassOneObject.printFactorial(3);		//print calculate and print factorial of 3
	
	//derived class 2
	FactorsOfANumber factObj ; 						//create derived class 2(FactorsOfANumber) object
	factObj.printFactors(24);						//calculate and print factors of 24
	cout << "----------------------------------------------" << endl ; 
	factObj.printFactors(15);						//calculate and print factors of 15
}

/* Output:
==============================================
BasicMathOperations class object is created
==============================================
Sum of numbers: 20, 10 is 30
Difference of numbers: 20, 10 is 10
----------------------------------------------
Sum of numbers: 10, 20 is 30
Difference of numbers: 10, 20 is -10
==============================================
BasicMathOperations class object is created
==============================================
==============================================
Factorial class object is created
==============================================
Factorial of 5 is 120
----------------------------------------------
Factorial of 3 is 6
==============================================
BasicMathOperations class object is created
==============================================
==============================================
FactorsOfANumber class object is created
==============================================
Factors of the number: 24 between 1 and 10 are
1 2 3 4 6 8
----------------------------------------------
Factors of the number: 15 between 1 and 10 are
1 3 5
*/