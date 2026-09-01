#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int roll;
    string name;
    float marks1, marks2, marks3;
    float total;
    float avg;
    char grade;

    void input() {
        cout << "Enter roll no: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks of English: ";
        cin >> marks1;

        cout << "Enter Marks of Maths: ";
        cin >> marks2;

        cout << "Enter Marks of Science: ";
        cin >> marks3;

        total = marks1 + marks2 + marks3;
        avg = total / 3;

        if (avg >= 90)
            grade = 'A';
        else if (avg >= 80)
            grade = 'B';
        else if (avg >= 70)
            grade = 'C';
        else if (avg >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll No : " << roll << endl;
        cout << "English : " << marks1 << endl;
        cout << "Maths   : " << marks2 << endl;
        cout << "Science : " << marks3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average : " << avg << endl;
    }

    void gradeDisplay() {
        cout << "Grade : " << grade << endl;
    }
};

int main() {
    student s;
    s.input();
    s.display();
    s.gradeDisplay();

    return 0;
}
    