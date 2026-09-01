#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int roll;
    string name;
    float marks1, marks2, marks3;
    float total, avg;
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

        if (avg >= 90) grade = 'A';
        else if (avg >= 80) grade = 'B';
        else if (avg >= 70) grade = 'C';
        else if (avg >= 60) grade = 'D';
        else grade = 'F';
    }

    void display(string n) {
        cout << "Name : " << n << endl;
    }

    void display(int r) {
        cout << "Roll No : " << r << endl;
    }

    void display(float m1, float m2, float m3) {
        cout << "English : " << m1 << endl;
        cout << "Maths : " << m2 << endl;
        cout << "Science : " << m3 << endl;
    }

    void display(float t, float a, char g) {
        cout << "Total Marks : " << t << endl;
        cout << "Average : " << a << endl;
        cout << "Grade : " << g << endl;
    }
};

int main() {
    student s;
    s.input();

    s.display(s.name);
    s.display(s.roll);
    s.display(s.marks1, s.marks2, s.marks3);
    s.display(s.total, s.avg, s.grade);

    return 0;
}