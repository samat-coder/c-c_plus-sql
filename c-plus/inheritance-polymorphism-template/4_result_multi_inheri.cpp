#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int rollno;

public:
    void input_persondata()
    {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter student's roll number: ";
        cin >> rollno;
    }
    void print_persondata()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
    }
};
class exam : public person
{

protected:
    float marks[5];

public:
    void inputmarks()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    void displayMarks()
    {
        cout << "Marks obtained in 5 subjects:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};
class Result : public exam
{
private:
    float totalMarks;
    float percentage;

public:
    void calculateResult()
    {
        totalMarks = 0;
        for (int i = 0; i < 5; i++)
        {
            totalMarks += marks[i];
        }
        percentage = (totalMarks / 500) * 100;
    }

    void displayResult() const
    {
        cout << "Total Marks: " << totalMarks << "/500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Result student;

    
    student.input_persondata();
    student.inputmarks();
    student.calculateResult();

    cout << "\n--- Student Mark Sheet ---\n";
    student.print_persondata();
    student.displayMarks();
    student.displayResult();

    return 0;
}