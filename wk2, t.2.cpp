//Nickson Basweti
//Task 2: Admission Decision (Nested if)  

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string student_name;
	int age;
	float exam_score;
	
	cout<<" Enter student name, age and exam score (0-100): "<<endl;
	cin>>student_name>>age>>exam_score;
	
	if (age>=18)
		if (exam_score>=50)
		{
		   cout<<"Admitted"<<endl;
	
	
	
}
