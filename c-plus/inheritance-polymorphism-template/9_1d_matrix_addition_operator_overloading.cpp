#include <iostream>
using namespace std;
class matrix
{
public:
    int size;
    int arr1[50];
    //int arr2[50];

public:
    void input_array_element()
    {
        cout << "\n\tenter the array size: ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "\n\tarray" << i << " ";
            cin >> arr1[i];
        }
    }
    void print_array_element()
    {
       cout<<"\n\t\t";
        for (int i = 0; i < size; i++)
        {
            cout << arr1[i] << " ";
        }   
    }
    matrix operator+(matrix &m1)
    {
        matrix result;
        result.size = size;
        for (int i = 0; i < size; i++)
        {
            result.arr1[i] = arr1[i] + m1.arr1[i];
        }
        return result;
    }
    void display()
    {   cout<<"\n\t\t";
        for (int i = 0; i < size; i++)
        {
            cout << arr1[i] << " ";
        }
    }
};
int main()
{
    matrix m1, m2, m3;
    cout<<"------------------array 1--------------------";
    m1.input_array_element();
    cout<<"------------------array 2--------------------";
    m2.input_array_element();

    cout<<"\n------------------array 1--------------------\n";
    m1.print_array_element();
    cout<<"\n------------------array 2--------------------\n";
    m2.print_array_element();
    m3 = m1 + m2;

    cout<<"\n------------------addition-------------------";
    m3.display();
}