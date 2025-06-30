#include<iostream>
using namespace std;
class calculator{

    float a,b;
    public:
        calculator(float v1,float v2){
            a=v1;
            b=v2;
        }
        void add(){
            cout<<"\n\taddition is: "<<a+b;
        }
        void sub(){
            cout<<"\n\tsubtraction is: "<<a-b;
        }
        void multi(){
            cout<<"\n\tmultiplication is: "<<a*b;
        }
        void div(){
            cout<<"\n\tdivision is: "<<a/b;
        }

};
int main(){

    int v1,v2;

    cout<<"enter the first value: ";
    cin>>v1;
    cout<<"enter the second value: ";
    cin>>v2;

    calculator cal(v1,v2);

    cal.add();
    cal.sub();
    cal.multi();
    cal.div();

}