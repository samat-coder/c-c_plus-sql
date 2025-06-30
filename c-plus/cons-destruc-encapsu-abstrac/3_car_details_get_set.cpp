#include<iostream>
using namespace std;
class car{
    private:
        string company;
        string model;
        int year;
    public:
        void setcompany(string com){
            company=com;
        }
        string getcompany(){
            return company;
        }
        void setmodel(string mod){
            model=mod;
        }
        string getmodel(){
            return model;
        }
        void setyear(int y){
            year=y;
        }
        int getyear(){
            return year;
        }
};
int main(){

    string com,mod;
    int y;
    

    cout<<"\n\tenter the company name: ";
    cin>>com;
    cout<<"\n\tenter the model name: ";
    cin>>mod;
    cout<<"\n\tenter the year: ";
    cin>>y;

    car c;
    c.setcompany(com);
    c.setmodel(mod);
    c.setyear(y);

    cout<<"\n\t-----------car details-------------";
    cout<<"\n\tcar company is: "<<c.getcompany();
    cout<<"\n\tcar model is: "<<c.getmodel();
    cout<<"\n\tcar year is: "<<c.getyear();




    

    

    
}