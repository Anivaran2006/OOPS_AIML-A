//University course registration system
#include<bits/stdc++.h>
using namespace std;
// class student{
//     public:
//     int roll;
//     string name;
//     float cgpa;
//     class address{
//         public:
//         string state;
//         string city;
//         address(string s,string c){
//             state=s;
//             city=c;
//         }
//         void display(){
//             cout<<"State:"<<state<<endl;
//             cout<<"City:"<<city<<endl;
//         }
//     };
//        address adress = address("Uttar Pradesh", "Ghaziabad");
    
//     student(int r,string n){
//         roll=r;
//         name=n;
//         cgpa=0.0;
//     }
//     student(int r, string n,float c){
//         roll=r;
//         name=n;
//         cgpa=c;
//     }
//     void updateCgpa(float cgpa){
//         this->cgpa=cgpa;
//     }
//     void display(){
//         cout<<"Roll No:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"CGPA:"<<setprecision(2)<<fixed<<cgpa<<endl;
//       adress.display();
//     }
// };
// int main(){
//     student students[5]={
//         student(1,"Anivaran",8.5),
//         student(2,"Ankit"),
//         student(3,"Amit"),
//         student(4,"Anjali",8.0),
//         student(5,"Aarav",9.2)
//     };
//     students[1].updateCgpa(7.5);
//     students[2].updateCgpa(8.0);
//     for(int i=0;i<5;i++){
//         students[i].display();
//         cout<<endl;
//     }
//     return 0;
// }
//Q2 Online shopping product management system
class product{
    public:
    int productid;
    string name;
    float price;
    product(int id, string n,float p){
        productid=id;
        name=n;
        price=p;
    }
    float calculatePrice(){
        return price;
    }
    float calculatePrice(float discount)
    {
        return price - (price * discount / 100);
    }
    float calculatePrice(float discount, float deliveryCharge)
    {
        return price - (price * discount / 100) + deliveryCharge;
    }
    void display(){
        cout<<"Product ID: "<<productid<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Price: $"<<price<<endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    product** products = new product*[n];

    for(int i = 0; i < n; i++)
    {
        int id;
        string name;
        float price;
        cout << "Enter details of Product " << i + 1 << endl;
        cout << "Product ID: ";
        cin >> id;
        cout << "Product Name: ";
        cin >> name;
        cout << "Price: ";
        cin >> price;
        products[i] = new product(id, name, price);
    }
    for(int i = 0; i < n; i++)
    {
        cout << "Product " << i + 1 << endl;
        products[i]->display();
        cout << "Original Price: "
             << products[i]->calculatePrice() << endl;
        cout << "10% Discount Price: "
             << products[i]->calculatePrice(10) << endl;
        cout << "10% Discount + Rs.50 Delivery: "
             << products[i]->calculatePrice(10, 50) << endl;
    }
    for(int i = 0; i < n; i++)
    {
        delete products[i];
    }
    delete[] products;
    return 0;
}
