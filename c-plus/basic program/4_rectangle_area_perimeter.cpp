#include<iostream>
using namespace std;
class rectangle{
    float r_length;
    float r_width;
    public:
       
        rectangle(float len,float wid){

            r_length=len;
            r_width=wid;

        }
        void area(){

            float area=r_length*r_width;
            cout<<"\n\trectangle area is: "<<area;

        }
        void perimeter(){

            float perimeter=2*(r_length+r_width);
            cout<<"\n\trectangle perimeter is: "<<perimeter;

        }
        
        


};
int main(){

    float length,width;
    cout<<"enter the rectangle height: ";
    cin>>length;
    cout<<"enter the rectangle width: ";
    cin>>width;


    rectangle rt(length,width);
    rt.area();
    rt.perimeter();

    



    
    

}