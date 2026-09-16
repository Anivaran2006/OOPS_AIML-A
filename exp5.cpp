// Wap a cpp program to score the attendance of six students in a vector in collection use the ranged for loop with auto to display all the attendence percentage and count how many student have attence more than 75%.
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<int> attendance = {80, 65, 90, 74, 76, 88};

//     int countAbove75 = 0;

//     cout << "Attendance percentages:";
//     cout<<endl;
  
//     for (auto percent : attendance) {
//         cout << percent << "% ";
//         if (percent > 75) {
//             countAbove75++;
//         }
//     }
//     cout<<endl;
//     cout << "Number of students with attendance > 75%: " 
//          << countAbove75 << endl;

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<double> salaries(n);

//     for (auto& salary : salaries) {
//         cin >> salary;
//     }

//     double total = accumulate(salaries.begin(), salaries.end(), 0.0);
//     double highest = *max_element(salaries.begin(), salaries.end());

//     int count = count_if(salaries.begin(), salaries.end(), [](double salary) {
//         return salary > 50000;
//     });

//     double average = total / salaries.size();

//     cout << fixed << setprecision(2);

//     cout << "Employee salaries:" << endl;
//     for (auto salary : salaries) {
//         cout << salary << endl;
//     }

//     cout << "Total salary: " << total << endl;
//     cout << "Highest salary: " << highest << endl;
//     cout << "Employees with salary greater than 50000: " << count << endl;
//     cout << "Average salary: " << average << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
class bankAccount{
    private:
    int accountNumber;
    double balance;
    public:
     bankAccount(int accNo, double bal){
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount){
        balance += amount;
        cout <<"Amount deposited: "<<amount<<endl;
    }
    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    bankAccount account(101, 5000);
    account.deposit(2000);
    account.withdraw(1500);
    account.display();
    return 0;
}
