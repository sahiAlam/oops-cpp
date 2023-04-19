#include <iostream>
using namespace std;

struct Student {
    int age;
    int roll;
    char name[30];

    Student() {
        cout << "Default constructor called.." << endl;
    }

    Student(int a, int b) {
        age = a;
        roll = b;
    }

    void print() {
        cout << "Age -> " << age << endl;
        cout << "Roll -> " << roll << endl;
    }

    void print2() {
        cout << "Age -> " << this->age << endl;
        cout << "Roll -> " << this->roll << endl;
    }

    ~Student() {
        cout << "Destructor called.." << endl;
    }

};

int main() {


    Student s1;
    Student *s = new Student();


    delete s;
    s->print2();

    // Student s1(10,1);
    s1.print();

    // s1.age = 21;
    // s1.roll = 100;
    // cout << "Age = " << s1.age << endl;
    // cout << "Roll = " << s1.roll << endl;


    return 0;
}