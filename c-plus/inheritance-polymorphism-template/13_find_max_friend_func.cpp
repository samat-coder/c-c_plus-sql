#include <iostream>
using namespace std;
class maxnum
{
private:
    int a, b;

public:
    maxnum(int x, int y)
    {
        a = x;
        b = y;
    }
    friend int maxnumber(maxnum &n);
};
int maxnumber(maxnum &n)
{
    if (n.a > n.b)
    {
        return n.a;
    }
    else
    {
        return n.b;
    }
}
int main()
{
    int x, y;

    cout << "\n\t------------max value----------------";
    cout << "\n\tenter first value: ";
    cin >> x;
    cout << "\n\tenter second value: ";
    cin >> y;

    maxnum s(x,y);
    

    int max=maxnumber(s);
    cout<<"\n\tmax number is: "<<max;
}