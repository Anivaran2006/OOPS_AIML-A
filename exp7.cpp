#include<iostream>
using namespace std;
class student{
    private:
    int marks;
    static int count;
    public:
    student(int m){
        marks=m;
        count++;
    }
    friend void display(student s);
};
int student::count=0;
void display(student s){
    cout<<"Marks: "<<s.marks<<endl;
    cout<<"Total Students: "<<student::count<<endl;
}
int main(){
    student s1(80);
    student s2(90);
    display(s1);
    display(s2);
    return 0;
}