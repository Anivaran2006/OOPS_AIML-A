#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int Roll;

public:
    Student() {
        name = "Anivaran";
        Roll = 27;
    }

    Student(string n) {
        name = n;
        Roll = 25;
    }

    Student(string n, int a) {
        name = n;
        Roll = a;
    }

    void display() {
        cout << "Name: " << name <<endl<<"Age: " << Roll << endl;
    }
};

int main() {
    Student s1;
    Student s2("Aryan");
    Student s3("Rahul", 20);

    s1.display();
    s2.display();
    s3.display();
}