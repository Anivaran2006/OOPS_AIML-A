#include<bits/stdc++.h>
using namespace std;
//Q1
// class product{
//     public:
//     int Productid;
//    std::string name;
//     float price;
//     public:
//     product(int id,std::string n,float p){
//         Productid=id;
//         name=n;
//         price=p;
//     }
//     const product& comparePrice(const product& other) const{
//         if(this->price>=other.price){
//             return *this;
//         }
//         else{
//             return other;
//         }
//         }
//        void display() const{
//         std::cout<<"Product ID: "<<Productid<<std::endl;
//         std::cout<<"Name: "<<name<<std::endl;
//         std::cout<<"Price: $"<<price<<std::endl;
//     }
//     };
//     int main(){
//         product p1(101,"Laptop",75000.0);
//         product p2(102,"Smartphone",45000.0);
//    const product& higher=p1.comparePrice(p2);
//         std::cout<<"Product with higher price:"<<std::endl;
//         higher.display();
//         return 0;
//     }

//Q2
// class bankAccount{
//     int accno;
//     string name;
//     float balance;
//     public:
//     bankAccount(int acc,string n,float bal){
//         accno=acc;
//         name = n;
//         balance=bal;
//     }
//     friend void compareBalance(bankAccount b1 , bankAccount b2){
//         if(b1.balance>b2.balance){
//             cout<<"Details of Account with higher balance"<<endl<<b1.accno<<endl;
//             cout<<b1.name<<endl;
//             cout<<b1.balance;
//         }
//     else if(b2.balance>b1.balance){
//       cout<<"Details of Account with higher balance"<<endl<<b2.accno<<endl;
//       cout<<b2.name<<endl;
//       cout<<b2.balance;
//     }
//     else{
//         cout<<"Both have same balance";
//     }
// }
// };
// int main(){
//     bankAccount b3(56,"Anivaran",2);
//     bankAccount b4(6,"Anivaran",3 );compareBalance(b3,b4);
//     return 0;
// }

//Q3
// class patient{
//     private:
//     int patientid;
//     string name;
//     public:
//     static int patientActive;
//     patient(int id,string n){
//     patientid=id;
//     name=n;
//     patientActive++;
// }
// ~patient(){
//     patientActive--;
// }
// static void displayActivePatients(){
//     cout<<"Active patients: "<<patientActive<<endl;
// }
// };
// int patient::patientActive=0;
// int main(){
//     patient p1(1,"Anivaran");
//     patient p2(2,"Anivaran");
//     patient::displayActivePatients();
//     {
//         patient p3(3,"Anivaran");
//         patient::displayActivePatients();
//     }
//     patient::displayActivePatients();
//     return 0;
// }
//Q4
class university{
    private:
    string universityName;
    public: 
    university(string name){
        universityName=name;
    }   
    class department{
        private:
        string departmentName;
        int count;
        public:
        department(string name,int count1){
            departmentName=name;
            count=count1;
        }
        void display(const university &u) {
            cout<<"university name : "<<u.universityName<<endl;
            cout<<"Department name: "<<departmentName<<endl;
            cout<<"Count: "<<count<<endl;
        }
    };
};
int main(){
    university u1("Abes Engineering College");
    university::department d1("Computer Science",100);
    d1.display(u1);
    return 0;
}
//Q5
