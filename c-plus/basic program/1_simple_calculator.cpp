#include <iostream>
using namespace std;

class calculator{
    public:
    int add(int a,int b){
        return a+b;
    }
    int subtraction(int a,int b){
        return a-b;
    }
    int multiplication(int a,int b){
        return a*b;
    }
    int division(int a,int b){
        return a/b;
    }

};
int main(){

    int a,b;
    char operation;
    calculator cal;

    cout<<"\n\tenter the first value: ";
    cin>>a;
    cout<<"\n\tenter the operator: ";
    cin>>operation;
    cout<<"\n\tenter the second value: ";
    cin>>b;

    switch (operation)
    {
    
    case '+':
        cout<<"result: "<<cal.add(a,b)<<endl;
        break;
    
    case '-':
        cout<<"result: "<<cal.subtraction(a,b)<<endl;
        break;
    
    case '*':
        cout<<"result: "<<cal.multiplication(a,b)<<endl;
        break;
    
    case '/':
        cout<<"result: "<<cal.division(a,b)<<endl;
        break;

        default:printf("\n\tenter the valid operation sign");
    }


}


