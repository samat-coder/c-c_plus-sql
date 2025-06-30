#include<iostream>
using namespace std;

int multiplication(int a,int b){
    return a*b;
}
int cubic(int cubicvl){
    return cubicvl*cubicvl*cubicvl;
}
int main(){

    int v1,v2;

    cout<<"\n\tenter the first value: ";
    cin>>v1;
    cout<<"\n\tenter the second value: ";
    cin>>v2;

    int multi=multiplication(v1,v2);
    cout<<"\n\tmultiplication is: "<<multi;

    int cubicvl;
    cout<<"\n\tenter the value you want to cubic: ";
    cin>>cubicvl;
    int cubicans=cubic(cubicvl);
    cout<<"\n\tcubic answer is: "<<cubicans;

}