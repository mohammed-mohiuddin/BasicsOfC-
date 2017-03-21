/*Program to demonstarate the usage of constructor copy.
A constructor can be copied in two ways.
Copy contents of existingObjectName into newObjectName.
1. ClassName newObjectName(existingObjectName).
2. ClassName newObjectName = existingObjectName. */

#include <iostream>
using namespace std ;

class ClassName{
	//private members of class
	private:
		int intMemberVariable ;
		float floatMemberVariable ;
		
	//public members of class
	public:
		//default constructor
		ClassName(): intMemberVariable(10), floatMemberVariable(20.0001){
			cout << "From default constructor" << endl ;
		}
		//overloaded constructor
		ClassName(int integer, float floatValue): intMemberVariable(integer), floatMemberVariable(floatValue){
			cout << "From overloaded constructor" << endl ;
		}
		
		//method to print member variables
		void displayMemberVariables(){
			cout << "Member Variable 1: " << intMemberVariable << endl ;
			cout << "Member Variable 2: " << floatMemberVariable << endl ;
		}
};

int main(){
	//create object using default constructor
	ClassName objectName1 ;
	objectName1.displayMemberVariables() ;
	
	//create object using overloaded constructor
	ClassName objectName2(100, 200.01) ;
	objectName2.displayMemberVariables() ;
	
	//copy objectName1 into objectName3
	cout << "Copying contents of object initialized using default constructor" << endl ;
	ClassName objectName3(objectName1) ;
	objectName3.displayMemberVariables() ;
	
	//copy objectName2 into objectName3
	cout << "Copying contents of object initialized using overloaded constructor" << endl ;
	objectName3 = objectName2 ;
	objectName3.displayMemberVariables() ;
	
}

/* Output:
--------------------------------------------------------------------
From default constructor
Member Variable 1: 10
Member Variable 2: 20.0001
From overloaded constructor
Member Variable 1: 100
Member Variable 2: 200.01
Copying contents of object initialized using default constructor
Member Variable 1: 10
Member Variable 2: 20.0001
Copying contents of object initialized using overloaded constructor
Member Variable 1: 100
Member Variable 2: 200.01
-------------------------------------------------------------------- */