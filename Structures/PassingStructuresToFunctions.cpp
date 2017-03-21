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
	
void displayProfessorData(faculty) ;
void displayStudentData(student) ;

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
	
	//function calls to display professor's data
	displayProfessorData(professor1) ;
	displayProfessorData(professor2) ;
	
	//function call to display student data
	displayStudentData(student1) ;
	
	return 0 ;
}

void displayProfessorData(faculty professor){
	//display the details of professor:
	cout << "Details of the professor: " << endl ;
	cout << "Name = " << professor.name << endl ;
	cout << "Age = " << professor.age << endl ;
	cout << "Department = " << professor.department << endl ;
	cout << "---------------------------------------------------" << endl ;
}

void displayStudentData(student student1){
	//display the details of the student
	cout << "Details of the student: " << endl ;
	cout << "Name = " << student1.name << endl ;
	cout << "Age = " << student1.age << endl ;
	cout << "Course = " << student1.course << endl ;
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