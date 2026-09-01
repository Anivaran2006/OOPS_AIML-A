// Wap a cpp program to score the attendance of six students in a vector in collection use the ranged for loop with auto to display all the attendence percentage and count how many student have attence more than 75%.
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> attendance = {80, 65, 90, 74, 76, 88};

    int countAbove75 = 0;

    cout << "Attendance percentages:";
    cout<<endl;
  
    for (auto percent : attendance) {
        cout << percent << "% ";
        if (percent > 75) {
            countAbove75++;
        }
    }
    cout<<endl;
    cout << "Number of students with attendance > 75%: " 
         << countAbove75 << endl;

    return 0;
}
// wap a cpp program to store the monthly salary of the employees in a vector double collection. use a range based for loop with auto to display the following : Display all employee salary. Calculate the total of the employees .
// Find the highest salary employee. Count how many employee have a salary greater than 50000. Calculate the average salary.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<double> salaries(n);
    for (auto& salary : salaries) {
        cin >> salary;
    }
    double total = accumulate(salaries.begin(), salaries.end(), 0.0);
    double highest = *max_element(salaries.begin(), salaries.end());

    int count = count_if(salaries.begin(), salaries.end(),
                         [](double salary) {
                             return salary > 50000;
                          });
double average = total / salaries.size();
    cout << fixed << setprecision(2);
      cout << "Employee salaries:"<<endl;
    for (auto salary : salaries) {
        cout << salary <<endl;
    }
    cout<<