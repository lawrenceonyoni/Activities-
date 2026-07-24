//Lawrence Onyoni 
//Task 2: Admission Decision (Nested if)  

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string student_name;
    int age;
    float exam_score;

    cout << "Enter student name: ";
    getline(cin, student_name);

    cout << "Enter age and exam score: ";
    cin >> age >> exam_score;

    if (age >= 18 && exam_score >= 50) 
    {
        cout << "Admitted" << endl;
    } 
    else 
    {
        cout << "Not reach conditions given" << endl;
    }

    return 0;
}
