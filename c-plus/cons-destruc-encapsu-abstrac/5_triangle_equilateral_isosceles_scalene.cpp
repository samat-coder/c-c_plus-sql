#include <iostream>
using namespace std;
class triangle
{
    int s1, s2, s3;

public:
    void settriangle(int side1, int side2, int side3)
    {
        s1 = side1;
        s2 = side2;
        s3 = side3;
    }
    bool isEquilateral()
    {
        return (s1 == s2 && s2 == s3);
    }
    bool isisosceles()
    {
        return (s1 == s2 || s2 == s3 || s1 == s3);
    }
    bool isScalene()
    {
        return (s1 != s2 && s2 != s3 && s1 != s3);
    }

    void displaydata()
    {
        if (isEquilateral())
        {
            cout << "\n\tthe triangle is equilateral.";
        }
        else if (isisosceles())
        {
            cout << "\n\tthe triangle is isisosceles.";
        }
        else if (isScalene())
        {
            cout << "\n\tthe triangle is isScalene.";
        }
        else
        {
            cout << "\n\tinvalid triangle";
        }
    }
};
int main()
{
    int side1, side2, side3;

    cout << "enter the first value: ";
    cin >> side1;
    cout << "enter the second value: ";
    cin >> side2;
    cout << "enter the third value: ";
    cin >> side3;

    triangle t;
    t.settriangle(side1, side2, side3);
    t.displaydata();
}