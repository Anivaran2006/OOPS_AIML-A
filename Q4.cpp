#include<iostream>
using namespace std;
class Area{
    public:
    int t,s;
    int square(int a){
        t=a*a;
        return t;
    }
    int rectangle(int l,int b){
        s=l*b;
        return s;
    }
    void display(){
        cout<<"Area of Square:"<<t<<endl;
        cout<<"Area of Rectangle:"<<s<<endl;
    }
};
int main(){
    Area a1;
    a1.square(5);
    a1.rectangle(3,2);
    a1.display();
    return 0;
}