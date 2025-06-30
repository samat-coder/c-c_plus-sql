#include<iostream>
using namespace std;
class circle{
    float radious;
    public:
       
        circle(float rad){
            radious=rad;
        }
        void calcircle(){
            float area=3.14*radious*radious;
            cout<<"\n\tcircle area is: "<<area;
        }
        void circumference(){
            float circumf=2*3.14*radious;
            cout<<"\n\t circumference is: "<<circumf;
        }


};
int main(){

    float radious;
    cout<<"enter the radius: ";
    cin>>radious;


    circle cir(radious);

    cir.calcircle();
    cir.circumference();




    
    

}