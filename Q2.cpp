#include<iostream>
using namespace std;
class Employee{
    private:
    int empId;
    double salary;
    public:
    void input();
    void display();
    };
 void Employee::input(){
        cout<<"Enter Employee Id :";
        cin>>empId;
        cout<<"Enter Salary :";
        cin>>salary;
 }
 void Employee::display(){
       cout<<"Employee Id :"<<empId<<endl;
       cout<<"Employee Salary :"<<salary<<endl;
 }
 int main(){
    Employee e;
    e.input();
    e.display();
    return 0;
 }