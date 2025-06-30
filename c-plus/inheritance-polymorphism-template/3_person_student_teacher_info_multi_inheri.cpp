#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void inputPersonData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
protected:
    float percentage;

public:
    void inputStudentData()
    {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() 
    {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person
{
protected:
    float salary;

public:
    void inputTeacherData()
    {
        inputPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() 
    {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "Enter details for student:\n";
    s.inputStudentData();

    cout << "\nEnter details for teacher:\n";
    t.inputTeacherData();
    cout << "\nStudent Details:\n";
    s.displayStudentData();
    cout << "\nTeacher Details:\n";
    t.displayTeacherData();
    
}