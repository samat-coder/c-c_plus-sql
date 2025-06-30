#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void inputRollNumber()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() const
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};


class Test : public Student
{
protected:
    float marks1, marks2;

public:
    void inputMarks()
    {
        cout << "Enter marks of two subjects:\n";
        cout << "Subject 1: ";
        cin >> marks1;
        cout << "Subject 2: ";
        cin >> marks2;
    }

    void displayMarks() const
    {
        cout << "Marks obtained in Subject 1: " << marks1 << endl;
        cout << "Marks obtained in Subject 2: " << marks2 << endl;
    }
};


class Result : public Test
{
public:
    void displayResult()
    {
        float total = marks1 + marks2;
        displayRollNumber();  
        displayMarks();      
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    Result r;

 
    r.inputRollNumber();  
    r.inputMarks();       


    cout << "\nStudent Result:\n";
    r.displayResult();   

    return 0;
}