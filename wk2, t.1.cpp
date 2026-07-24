//Nickson Basweti
//WEEK 2: Task1: Grading System

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string student_name;
	int exam_marks;
	char grade;
	
	cout<<"Enter student name and exam marks (0-100): "<<endl;
	cin>>student_name>>exam_marks;
	
	if (exam_marks>=70 && exam_marks<=100)
	{
		grade='A';
	}

	else if(exam_marks>=60 && exam_marks<=69)
	{
		grade='B';
	}
		
	else if(exam_marks>=50 && exam_marks<=59)
	{
		grade = 'C';
	}
	
	else if(exam_marks>=40 && exam_marks<=49)
	{
		grade ='D';
	}
	
	else
	{
		grade = 'E';
	};

	cout<<"/n----exam report----"<<endl;
	cout<<" Student name: "<<student_name<<endl;
	cout<<" Exam marks: "<<exam_marks<<endl;
	cout<<" Grade: "<<grade<<endl;
	return 0;
};