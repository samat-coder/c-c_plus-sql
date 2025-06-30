#include <iostream>
using namespace std;
class person
{
    string p_name, p_country;
    int p_age;

public:
    void setname(string name)
    {
        p_name = name;
    }
    string getname()
    {
        return p_name;
    }
    void setage(int age)
    {
        if (age > 0)
        {
            p_age = age;
        }
        else
        {
            cout << "enter the positive value";
        }
    }
    int getage()
    {
        return p_age;
    }
    void setcountry(string country)
    {
        p_country=country;
    }
    string getcountry(){
        return p_country;
    }
};
int main()
{

    string name, country;
    int age;

    cout << "\n\tenter your name: ";
    cin >> name;
    cout << "\n\tenter your age: ";
    cin >> age;
    cout << "\n\tenter your country name: ";
    cin >> country;

    person p;
    p.setname(name);
    p.setage(age);
    p.setcountry(country);

    cout<<"\n\t------------person information------------";
    cout<<"\n\t\tperson name    :"<<p.getname();
    cout<<"\n\t\tperson age     :"<<p.getage();
    cout<<"\n\t\tperson country :"<<p.getcountry();
}