#include <iostream>
using namespace std;

int operation(int a, int b)
{
    return a + b;
}
int operation(int a, int b, char op)
{
    if (op == '-')
    {
        return a - b;
    }
    return 0;
}
int operation(int a, int b, bool multiply)
{
    if (multiply)
    {
        return a * b;
    }
}
double operation(double a, double b, double)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
}

int main()
{
    int a = 10, b = 5;
    double x=10.5,y=5.5;

    cout<<"\n\t addition: "<<operation(a,b);
    cout<<"\n\t subtraction: "<<operation(a,b,'-');
    cout<<"\n\t multiplication: "<<operation(a,b,true);
    cout<<"\n\t division: "<<operation(x,y,0.0);
}