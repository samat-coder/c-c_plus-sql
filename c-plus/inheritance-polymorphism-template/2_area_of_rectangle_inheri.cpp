#include<iostream>
using namespace std;

class rectangle{
    public:
        float length;
        float width;

        void input_rectangle(){
            cout<<"\n\tenter the length: ";
            cin>>length;
            cout<<"\n\tenter the width: ";
            cin>>width;
        }
};
class area : public rectangle{
    private:
        float area;
    public:
        void cal_area(){
            area=length*width;
            cout<<"\n\tthe area of rectangle is: "<<area;
        }
};
int main(){
    area a;
    a.input_rectangle();
    a.cal_area();
}