/* Break Introduction: Break and continue are used to alter the normal flow of the loop.
Break is used to come out of the for, while,do while and switch loops irrespective of the 
conditional expression i.e break statement terminates a loop or switch statement. 

In real practice break is used inside of the body of a conditional loop(if or else) inside
the body of a loop. */

/* Program to check whether a student taking online course can be issued certificate or not.
The pass criteria is that the student should score 75% of marks. The student takes online
exam. He has to answer 20 questions. Each question carries 5 marks. Our program checks the
possibility of issuing certificate after every question. As soon as the student scores 75,
a success message should be displayed and as soon as the student loses 30 marks, a failure
message should be displayed. */

//Assumption: Correctness of the questions is provided by user.

#include <iostream>

using namespace std;

int main(){
	//variable declarations
	int correctAnswers = 0, wrongAnswers = 0 ;
	bool answer = 0;
	
	//display assumption
	cout << "Assumption: 1 for true answer and 0 for wrong answer " << endl ;
	
	/*Calculate possibility of passing for every question and display
	the corressponding result to the user. */
	for( int i = 1; i <= 20; i++){	
		cout << "Please enter either 0 or 1 " << endl ;
		cin >> answer ;
		
		if(answer == 1){
			correctAnswers += 1 ;
		}
		
		if( answer == 0){
			wrongAnswers += 1 ;
		}
		
		if(correctAnswers == 15){
			cout << "Congrats!! You have cleared the exam. " << endl ;
			break ;
		}
		
		if(wrongAnswers == 6){
			cout << "We are sorry! You didn't make it. We are confident you will rock next time. " << endl ;
			break ;
		}
		
	}
	
	return 0;
}