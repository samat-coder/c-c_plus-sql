#include <iostream>
using namespace std;
class str
{
    string str1;

public:
    str(string s)
    {
        str1 = s;
    }
    str()
    {
    }
    void display()
    {
        cout << "\n\t" << str1;
    }
    str operator+(str &s1)
    {
        str s3;
        s3.str1 = str1 + s1.str1;
        return s3;
    }
};

int main()
{

    string str1, str2;

    cout << "\n\t enter the string 1:";
    cin >> str1;
    cout << "\n\t enter the string 2:";
    cin >> str2;

    str s1(str1);
    str s2(str2);

    s1.display();
    s2.display();

    str s3 = s1 + s2;
    s3.display();
}