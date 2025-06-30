#include<iostream>
using namespace std;
class swaps{
    private:
        int a,b;
    public:
        int number(int x,int y){
            a=x;
            b=y;
        }
        friend void swapnumber(swaps &n);
        void display(){
            cout << "a = " << a << ", b = " << b << endl;
        }

};
        void swapnumber(swaps &n){
            n.a=n.a+n.b;
            n.b=n.a-n.b;
            n.a=n.a-n.b;
        }
int main(){
    int x,y;

    cout<<"\n\t------------swaping----------------";
    cout<<"\n\tenter first value: ";
    cin>>x;
    cout<<"\n\tenter second value: ";
    cin>>y;

    swaps s;
    s.number(x,y);
    cout<<"\n\t-------------before swaping------------\n\t\t";
    s.display();

    swapnumber(s);
    cout<<"\n\t-------------after swaping-------------\n\t\t";
    s.display();    

}