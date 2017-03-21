// Program demonstrate the usage of classes and objects in c++

#include <iostream>
using namespace std ;

//class definition
class ClassName
{	
	//private members of class
	private:
		int integerVariable ;
		float floatVariable ;
	
	//public members of class
	public:
		// default constructor 
		ClassName(): integerVariable(0), floatVariable(0.0001) {
			cout << "From default constructor: initialized of member variables is completed" << endl ;
		}
		
		// getter methods
		int getIntegerVariable(){
			return integerVariable ;
		}
		float getFloatVariable(){
			return floatVariable ;
		}
		
		// setter methods
		void setIntegerVariable(int value){
			integerVariable = value ;
		}
		void setFloatVariable(float value){
			floatVariable = value ;
		}
		
		// increment methods
		int increaseIntegerVariable(){
			integerVariable += 1 ;
			return integerVariable ;
		}
		float increaseFloatVariable(){
			floatVariable += 1.0 ;
			return floatVariable ;
		}
		
		//print method
		void displayMemberVariables(){
			cout << "integerVariable value = " << getIntegerVariable() << endl ;
			cout << "floatVariable value = " << getFloatVariable() << endl ;
			cout << "-----------------------------------------------------" << endl ;
		}
};

// main function
int main(){
	//create object of class ClassName
	ClassName objectName ;
	
	// print initial values of member variables
	cout << "Initial values of member variables: " << endl ;
	objectName.displayMemberVariables() ;
	
	// print member variables after increasing them
	cout << "Incremented(+1) values of member variables: " << endl ;
	objectName.increaseIntegerVariable() ;
	objectName.increaseFloatVariable() ;
	objectName.displayMemberVariables() ;
	
	// print member variables after setting them equal to 2
	cout << "After setting member variable values to 2 and 2.0002: " << endl ;
	objectName.setIntegerVariable(2) ;
	objectName.setFloatVariable(2.0002) ;
	objectName.displayMemberVariables() ;
	
	return 0 ;	
}

/* Output:
----------------------------------------------------------------------
From default constructor: initialized of member variables is completed
Initial values of member variables:
integerVariable value = 0
floatVariable value = 0.0001
-----------------------------------------------------
Incremented(+1) values of member variables:
integerVariable value = 1
floatVariable value = 1.0001
-----------------------------------------------------
After setting member variable values to 2 and 2.0002:
integerVariable value = 2
floatVariable value = 2.0002
-----------------------------------------------------
----------------------------------------------------------------------- */