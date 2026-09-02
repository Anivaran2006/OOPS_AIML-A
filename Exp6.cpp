#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int roll;
    public:
    Student(){
        name="Aniv";
        roll=27;
        cout<<"Default constructor :"<<name<<endl;
    }
  Student(string n, int r){
    name=n;
    roll=r;
    cout<<"Constructor With parameter :"<<name<<endl;
  }
  Student(const Student &other){
    name=other.name;
    roll=other.roll;
    cout<<"Copy constructor :"<<name<<endl;
  }
  ~Student(){
    cout<<"Destructor :"<<name<<endl;
  }
  void display(){
    cout<<"Name :"<<name<<endl;
    cout<<"Roll no :"<<roll<<endl;
  }
};
int main(){
    Student s;
    s.display();
    Student s1("Anivaran",34);
    s1.display();
    Student s2=s1;
    s2.display();
    return 0;
}
