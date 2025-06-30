#include<iostream>
using namespace std;
class shape{
    public:
    double area(double radius){
        return 3.14*radius*radius;
    }
    double area(double length,double breadth){
        return length*breadth;
    }
    double area(double base,double height,bool istriangle){
        return 0.5*base*height;
    }

};
int main(){
    double radius;
    shape s;

    cout<<"\n\tenter the radius: ";
    cin>>radius;
    cout<<"\n\tarea of circle: "<<s.area(radius);

    double length,breadth;

    cout<<"\n\tenter the length: ";
    cin>>length;
    cout<<"\n\tenter the breadth: ";
    cin>>breadth;
    cout<<"\n\tarea of rectangle: "<<s.area(length,breadth);

    double base,height;

    cout<<"\n\tenter the base: ";
    cin>>base;
    cout<<"\n\tenter the height: ";
    cin>>height;
    cout<<"\n\tarea of triangle: "<<s.area(base,height,true);
    
    
    
    

}