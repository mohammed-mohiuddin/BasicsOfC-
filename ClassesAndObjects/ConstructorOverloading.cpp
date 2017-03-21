//Program to demonstarate the usage of constructor overloading

#include <iostream>
using namespace std ;

class ClassName{
	//private members of class
	private:
		int intMemberVariable ;
		float floatMemberVariable ;
		string stringMemberVariable ;
	//public members of class
	public:
		//default constructor
		ClassName(): intMemberVariable(10), floatMemberVariable(20.0001), stringMemberVariable("Arun Verma"){
			cout << "From default constructor" << endl ;
		}
		//overloaded constructor
		ClassName(int integer, float floatValue, string str): intMemberVariable(integer), floatMemberVariable(floatValue), stringMemberVariable(str){
			cout << "From overloaded constructor" << endl ;
		}
		
		//method to print member variables
		void displayMemberVariables(){
			cout << "Member Variable 1: " << intMemberVariable << endl ;
			cout << "Member Variable 2: " << floatMemberVariable << endl ;
			cout << "Member Variable 3: " << stringMemberVariable << endl ;
		}
};

int main(){
	//create object using default constructor
	ClassName objectName1 ;
	objectName1.displayMemberVariables() ;
	
	//create object using overloaded constructor
	ClassName objectName2(100, 200.0001, "Mohiuddin") ;
	objectName2.displayMemberVariables() ;
}

/* Output:
----------------------------------
From default constructor
Member Variable 1: 10
Member Variable 2: 20.0001
Member Variable 3: Arun Verma
From overloaded constructor
Member Variable 1: 100
Member Variable 2: 200
Member Variable 3: Mohiuddin
---------------------------------- */