// Program to get familarize with the syntax of structures.

#include <iostream>
using namespace std ;

//structure without an alias
struct faculty{
		string name ;
		int age ;
		string department ;
	} ;

//struct with an alias
typedef struct student{
		string name ;
		int age ;
		string course ;
	} studentDetails ;

int main(){	
	// example of structure using keyword struct, without alias
	struct faculty professor1;
	professor1.name = "Andrew Ng" ;
	professor1.age = 45 ;
	professor1.department = "Machine Learning" ;
	
	// example of structure without using keyword struct and alias
	faculty professor2 ;
	professor2.name = "Mohammed Mohiuddin" ;
	professor2.age = 28 ;
	professor2.department = "Parallel Computing" ;
	
	// example of structure having an alias
	studentDetails student1 ;
	student1.name = "Prachi Agarwal" ;
	student1.age = 24 ;
	student1.course = "Parallel Computing" ;
	
	//display details of professor 1:
	cout << "Details of the professor 1: " << endl ;
	cout << "Name = " << professor1.name << endl ;
	cout << "Age = " << professor1.age << endl ;
	cout << "Department = " << professor1.department << endl ;
	cout << "---------------------------------------------------" << endl ;
	
	//display the details of professor 2
	cout << "Details of the professor 2: " << endl ;
	cout << "Name = " << professor2.name << endl ;
	cout << "Age = " << professor2.age << endl ;
	cout << "Department = " << professor2.department << endl ;
	cout << "---------------------------------------------------" << endl ;
	
	//display the details of the student 1
	cout << "Details of the student 1: " << endl ;
	cout << "Name = " << student1.name << endl ;
	cout << "Age = " << student1.age << endl ;
	cout << "Course = " << student1.course << endl ;
	
	return 0 ;
}

/* Output:
--------------------------------------------------
Details of the professor 1:
Name = Andrew Ng
Age = 45
Department = Machine Learning
---------------------------------------------------
Details of the professor 2:
Name = Mohammed Mohiuddin
Age = 28
Department = Parallel Computing
---------------------------------------------------
Details of the student 1:
Name = Prachi Agarwal
Age = 24
Course = Parallel Computing
--------------------------------------------------- */