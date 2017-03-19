// Program to demonstrate working of 2D arrays

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	/* first index is student id(5 students)
	second index is course grades(2 courses) */
	int students[5][2] ;
	int courseGrade ;
	
	//iterate over students and courses to initialize grades
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 2; j++){
			//initilaize grades between 1 and 5
			courseGrade = (rand() % 5) + 1 ;      
			students[i][j] = courseGrade ;
		}
	}
	
	//print grades
	for(int i = 0; i < 5; i++){
		cout << "Results of student with id: " << i+101 << endl ;
		cout << "----------------------------------" << endl ;
		for(int j = 0; j < 2; j++){
			courseGrade = students[i][j] ;
			if(courseGrade <= 4){
				cout << "Student has received a grade of: " <<  courseGrade << endl ;
			}
			else{
				cout << "Student has not cleared the exam" << endl ;
			}
		}
		cout << "----------------------------------" << endl ;
	}
	
}

/* Output:
---------------------------------------------
Results of student with id: 101
----------------------------------
Student has received a grade of: 2
Student has received a grade of: 3
----------------------------------
Results of student with id: 102
----------------------------------
Student has not cleared the exam
Student has received a grade of: 1
----------------------------------
Results of student with id: 103
----------------------------------
Student has not cleared the exam
Student has not cleared the exam
----------------------------------
Results of student with id: 104
----------------------------------
Student has received a grade of: 4
Student has received a grade of: 4
----------------------------------
Results of student with id: 105
----------------------------------
Student has received a grade of: 3
Student has not cleared the exam
----------------------------------
-------------------------------------------- */