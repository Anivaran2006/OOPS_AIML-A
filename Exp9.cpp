//Exp-9.1
#include<bits/stdc++.h>
using namespace std;
// class student{
//     public:
//     string name;
//     int roll;
//     float marks;
//     void input(){
//         cout<<"Enter name:";
//         cin>>name;
//         cout<<"Enter roll number:";
//         cin>>roll;
//         cout<<"Enter marks:";
//         cin>>marks;
//     }
//     void display(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Roll Number:"<<roll<<endl;
//         cout<<"Marks:"<<marks<<endl;
//     }
//     };
//     int main(){
//         int n;
//         cout<<"Enter number of students:";
//         cin>>n;
//         student* students = new student[n];
//         for(int i=0;i<n;i++){
//             cout<<"Enter details of student "<<i+1<<endl;
//             students[i].input();
//         }
//         for(int i=0;i<n;i++){
//             cout<<"Details of student "<<i+1<<endl;
//             students[i].display();
//         }
//         student* topStudent = &students[0];
//         for(int i=1;i<n;i++){
//             if(students[i].marks>topStudent->marks){
//                 topStudent=&students[i];
//             }
//         }
//         cout<<"Top student details:"<<endl;
//         topStudent->display();
//         delete[] students;
//         return 0;
// }


//Exp-9.2
class service{
    public:
    string serviceName;
    float serviceCost;
    void input(){
        cout<<"Enter service name:";
        cin>>serviceName;
        cout<<"Enter service cost:";
        cin>>serviceCost;
    }
    void display(){
        cout<<"Service Name:"<<serviceName<<endl;
        cout<<"Service Cost:"<<serviceCost<<endl;
    }
};
class vehicle{
    public:
    string vehicleNumber;
    string ownerName;
    int numServices;
    service* services;
    vehicle(int count){
        numServices=count;
        services=new service[count];
    }
    void input(){
        cout<<"Enter vehicle number:";
        cin>>vehicleNumber;
        cout<<"Enter owner name:";
        cin>>ownerName;
        for(int i=0;i<numServices;i++){
            cout<<"Enter details of service "<<i+1<<endl;
            services[i].input();
        }
    }
    void display(){
       float totalCost=0;
        cout<<"Vehicle Number:"<<vehicleNumber<<endl;
        cout<<"Owner Name:"<<ownerName<<endl;
        for(int i=0;i<numServices;i++){
            cout<<"Details of service "<<i+1<<endl;
            services[i].display();
            totalCost+=services[i].serviceCost;
        }
        cout<<"Total Service Cost:"<<totalCost<<endl;
    }
    ~vehicle(){
        delete[] services;
    }
};
int main(){
    int count;
    cout<<"Enter number of services:";
    cin>>count;
    vehicle* v=new vehicle(count);
    cout<<"Enter vehicle details:"<<endl;
    v->input();
    cout<<"Vehicle details:"<<endl;
    v->display();
    delete v;
    return 0;
}