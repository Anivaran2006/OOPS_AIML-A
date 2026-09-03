#include<bits/stdc++.h>
using namespace std;
class student{
    string name;
    int marks;
    public:
    student(string n,int m){
        name=n;
        marks=m;
    }
    student(){
        cout<<"Default constructor"<<endl;
    }
    student(const student &s){
        name=s.name;
        marks=s.marks;
    
}
void show(){
    cout<<name<<" "<<marks<<endl;
}
};
int main(){
    student s1("Vikas",90);
    student s2=s1;
    s1.show();
    s2.show();
    return 0;
}