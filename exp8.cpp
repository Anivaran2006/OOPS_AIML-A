#include<iostream>
using namespace std;
   class number{
    int value;
    public:
    void input(){
     cin>>value;
    }
    void display(){
        cout<<"Result : "<<value<<endl;
    }
    number add(number n){
        number result;
        result.value=value+n.value;
        return result;
    }
   };
   int main(){
    number n1,n2,n3;
    cout<<"Enter first no: ";
    n1.input();
     cout<<"Enter second no: ";
    n2.input();
    n3=n1.add(n2);
    
    n3.display();
    return 0;
}