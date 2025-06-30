#include <iostream>
using namespace std;
class address
{
private:
    int houseNo;
    string street;
    string city;
    string state;
    int zipCode;

public:
    address()
    {
        houseNo;
        street = "";
        city = "";
        state = "";
        zipCode;
    }

    address(int h_no, string h_street, string h_city, string h_state, int h_zipcode)
    {
        houseNo = h_no;
        street = h_street;
        city = h_city;
        state = h_state;
        zipCode = h_zipcode;
    }
    void print_addresses()
    {
        cout << "\n\thouse no: " << houseNo;
        cout << "\n\tstreet  : " << street;
        cout << "\n\tcity    : " << city;
        cout << "\n\tstate   : " << state;
        cout << "\n\tzipcode : " << zipCode;
    }
};
class student
{
private:
    string name;
    string studentclass;
    int rollno;
    float totalmarks;
    address add;

public:
    student(string s_nm, string s_class, int s_rollno, float s_marks, address addr)
    {
        name = s_nm;
        studentclass = s_class;
        rollno = s_rollno;
        totalmarks = s_marks;
        add = addr;
    }
    char calculategrade()
    {
        if (totalmarks >= 450)
        {
            return 'A';
        }
        else if (totalmarks >= 350)
        {
            return 'B';
        }
        else if (totalmarks >= 250)
        {
            return 'C';
        }
        else
        {
            return 'D';
        }
    }

    void display_student_info()
    {
        cout << "\n\tname: " << name;
        cout << "\n\tstudent class: " << studentclass;
        cout << "\n\troll no: " << rollno;
        cout << "\n\ttotal marks: " << totalmarks;
        cout << "\n\tgrade: " << calculategrade();
        add.print_addresses();
    }
};
int main()
{
    address addr(28, "main street", "new york", "ny", 100001);
    student s("samat", "12th", 24, 422, addr);

    s.display_student_info();
}