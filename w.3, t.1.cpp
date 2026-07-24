//Lawrence Onyoni
//week 3, task 1
#include <iostream>
#include <string>

using namespace std;

string employee_name;
double basic_salary, Net_Salary;
int overtime_hours;
int overtime_pay;
float rate_per_hour=5/100;

void getEmployeeDetails(){    
	cout<<"Enter employee name: "<<endl; 
	getline(cin, employee_name);
	cout<<"Enter Basic salary: ksh."<<endl;
	cin>>basic_salary;
	cout<<"Enter overtime hours: "<<endl;
	cin>>overtime_hours;
}

void calculateOvertimePay(){	
	overtime_pay = overtime_hours * rate_per_hour;
}

void calculateNetSalary(){
	Net_Salary = basic_salary * overtime_pay;
}

void displayPayslip(){
	cout<<"------Payslip------"<<endl;
	cout<<"Employee Name: "<<employee_name<<endl;
	cout<<"Basic Salary: Ksh."<<basic_salary<<endl;
	cout<<"Overtime Pay: Ksh."<<overtime_pay<<endl;
	cout<<"Net Salary: Ksh."<<Net_Salary<<endl;	
}

int main(){
	getEmployeeDetails();
	calculateOvertimePay();
	calculateNetSalary();
	displayPayslip();
	return 0;
}