//Program to demonstrate the approach of passing objects to functions

#include <iostream>
using namespace std ;

//class definition to perform operations on salary
class CompanySalaries{
	//private members of class
	private:
		int salary ;
		float bonusPercentage ;
		
	//public members of class
	public:
		
		//overloaded constructor to intialize salary and conditional bonusPercentage
		CompanySalaries(int sal): salary(sal){
			if(salary < 50000){
				bonusPercentage = 0.15 ;
				cout << "Employee Bonus Percentage = " << 15 << endl ;
			}
			else if(salary >= 50000 && salary < 75000){
				bonusPercentage =  0.10 ;
				cout << "Employee Bonus Percentage = " << 10 << endl ;
			}
			else{
				bonusPercentage =  0.05 ;
				cout << "Employee Bonus Percentage = " << 5 << endl ;
			}
		}
		
		//method to calculate average salary including bonus
		float getAveragePayment(CompanySalaries employee1, CompanySalaries employee2, CompanySalaries employee3){
			float totalEmployee1Payment = employee1.salary + (employee1.salary * employee1.bonusPercentage) ; // 35000 + 5250 = 40250
			float totalEmployee2Payment = employee2.salary + (employee2.salary * employee2.bonusPercentage) ; // 55000 + 5500 = 60500
			float totalEmployee3Payment = employee3.salary + (employee3.salary * employee3.bonusPercentage) ; // 75000 + 3750 = 78750
			return (totalEmployee1Payment + totalEmployee2Payment + totalEmployee3Payment)/3 ; // (40250 + 60500 + 78750)/3 = 179500/3 = 59,833.33
			}
		
} ;


//driver main method
int main(){
	//variable declaration
	float averagePayment ;
	
	//create three employees with different salaries
	CompanySalaries employee11(35000) ;
	CompanySalaries employee22(55000) ;
	CompanySalaries employee33(75000) ;
	
	//calculate average salary
	averagePayment = employee11.getAveragePayment(employee11, employee22, employee33) ;
	cout << "Average Payment of our company is: " << averagePayment << " euros" << endl ;
	return 0 ;
}

/* Output:
--------------------------------------------------
Employee Bonus Percentage = 15
Employee Bonus Percentage = 10
Employee Bonus Percentage = 5
Average Payment of our company is: 59833.3 euros
-------------------------------------------------- */