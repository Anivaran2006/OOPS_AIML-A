#include <iostream>
using namespace std;
class student{
    public:
      int rollNo;
      string name;
      double marks;
      void input(){
        cout<<"Enter Roll no :";
        cin>>rollNo;
        cout<<"Enter Name :";
        cin>>name;
        cout<<"Enter Marks :";
        cin>>marks;
      }
      void display(){
        cout<<"Roll no :"<<rollNo<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks :"<<marks<<endl;
      }
      
};
int main(){
    student s;
    s.input();
    s.display();
    return 0;
}
