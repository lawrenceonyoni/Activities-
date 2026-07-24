//Nickson Basweti
//Task 2: Driving Test Result Evaluation System

#include <iostream>
#include <cstring>

using namespace std;

float average_score(float theory_test_marks, float practical_test_marks);

int main()
{
	string student_name;
	float theory_test_marks, practical_test_marks, AVG;
	
	 cout<<"Enter student's name, theory test marks, practical test marks:"<<endl;
	 cin>>student_name>>theory_test_marks>>practical_test_marks;
	 
	 AVG=average_score(theory_test_marks,practical_test_marks);
	 
	 cout<<"\n---EVALUATION RESULTS---"<<endl;
	 
	 cout<<"Student name:"<<student_name<<endl;
	 
	 cout<<"theory test marks: "<<theory_test_marks<<endl;
	 
	 cout<<"practical test marks: "<<practical_test_marks<<endl;
	 
	 cout<<"Your average score is: "<<AVG<<endl;
	 
	 
	 return 0;	 	 
};

float average_score(float theory_test_marks, float practical_test_marks)
{
	float AVG;
	
	AVG=(theory_test_marks+practical_test_marks)/2;
	
	return AVG;
}