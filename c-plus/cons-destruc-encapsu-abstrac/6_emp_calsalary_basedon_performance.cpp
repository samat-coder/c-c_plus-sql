#include<iostream>
using namespace std;
class employee{

    int e_id;
    string e_nm;
    double e_salary;
    

    public:
        employee(int emp_id,string emp_name,double emp_salary){
            e_id=emp_id;
            e_nm=emp_name;
            e_salary=emp_salary;
            
        }
        void setemp_performance(char performance_grade){
            switch (performance_grade)
            {
            case 'A':
                e_salary+=e_salary*0.20;
                break;
            case 'B':
                e_salary+=e_salary*0.15;
                break;
            case 'C':
                e_salary+=e_salary*0.10;
                break;
            
            default:cout<<"\n\tinvalid grade";
                break;
            }
        }

        void display(){

            cout<<"\n\temployee id is  :"<<e_id;
            cout<<"\n\temployee name is:"<<e_nm;
            cout<<"\n\temployee salary :"<<e_salary;
        
        }
    

};
int main(){
  string emp_name;
    int emp_id;
    double emp_salary;
    char performance_grade;

    cout << "\n\tenter employee id: ";
    cin >> emp_id;
    cout << "\n\tenter employee name: ";
    cin >> emp_name;
    cout << "\n\tenter employee salary: ";
    cin >> emp_salary;

    employee e(emp_id,emp_name,emp_salary);

    cout << "\n\tenter employee performance: ";
    cin >> performance_grade;

    e.setemp_performance(performance_grade);
    e.display();


}