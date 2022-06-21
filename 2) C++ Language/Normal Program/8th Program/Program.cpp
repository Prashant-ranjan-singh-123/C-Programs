#include <iostream>
using namespace std;
void Decoration()
{
    cout << "\n\n-----------------------------------------------------------------------------------------\n";
    cout << "**********This program will claculate grade of student by Prashant Ranjan Singh**********\n";
    cout << "-----------------------------------------------------------------------------------------\n\n";
}
void result()
{
    cout << "--------------------------------------\n";
    cout << "****************Result****************";
    cout << "\n--------------------------------------";
}
void End()
{
    cout << "\n\n\t\t\t-----------------------\n";
    cout << "\t\t\t**********END**********";
    cout << "\n\t\t\t-----------------------\n";
}
class grade_of_student
{
private:
    string name;
    char grade;
    int roll_number, english_marks, hindi_marks, maths_marks, science_marks, computer_marks,
        average_of_5_subject_marks;

public:
    grade_of_student()
    {
        cout << "Enter the Roll Number of student: ";
        cin >> roll_number;
        cin.clear();
        cin.ignore(5000000, '\n');
        cout << "\nEnter the Name of the student: ";
        getline(cin, name);
        cout << "\n\n1)Please input " << name << "'s English marks: ";
        cin >> english_marks;
        cout << "\n2)Please input " << name << "'s Hindi marks: ";
        cin >> hindi_marks;
        cout << "\n3)Please input " << name << "'s Maths marks: ";
        cin >> maths_marks;
        cout << "\n4)Please input " << name << "'s Science marks: ";
        cin >> science_marks;
        cout << "\n5)Please input " << name << "'s Computer marks: ";
        cin >> computer_marks;
    }
    void grade_calculator()
    {
        average_of_5_subject_marks = (english_marks + hindi_marks + maths_marks + science_marks +
                                      computer_marks) /
                                     5;
        if (average_of_5_subject_marks >= 60 && average_of_5_subject_marks <= 100)
        {
            grade = 'A';
        }
        else if (average_of_5_subject_marks >= 50 && average_of_5_subject_marks <= 59)
        {
            grade = 'B';
        }
        else if (average_of_5_subject_marks >= 40 && average_of_5_subject_marks <= 49)
        {
            grade = 'C';
        }
        else if (average_of_5_subject_marks >= 0 && average_of_5_subject_marks <= 39)
        {
            grade = 'D';
        }
    }
    void display()
    {
        cout << "\n\n\n\n";
        result();
        cout << "\n\n1) Name of Student is: " << name;
        cout << "\n\n2) Roll Number of Student is: " << roll_number;
        cout << "\n\n\n\n--------------------------------------\n";
        cout << "*****Marks Information and Result*****\n\n";
        cout << "1) Marks in English is: " << english_marks << "\n";
        cout << "2) Marks in Hindi is: " << hindi_marks << "\n";
        cout << "3) Marks in Maths is: " << maths_marks << "\n";
        cout << "4) Marks in Science is: " << science_marks << "\n";
        cout << "5) Marks in Computer is: " << computer_marks << "\n\n";
        cout << "Your Grade is: " << grade;
        cout << "\n--------------------------------------\n";
    }
};
int main()
{
    Decoration();
    grade_of_student grade;
    grade.grade_calculator();
    grade.display();
    End();
}
