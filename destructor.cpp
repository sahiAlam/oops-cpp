#include <iostream>
using namespace std;

class Student {

    public:
    int roll;
    char name[100];

    Student() {
        cout << "Default constructor called.." << endl;
    }

    ~Student() {
        cout << "Destructor called.." << endl;
    }

};


int main() {
    //Ststically
    Student s1; // autometically destructor called

    //Dynamically
    Student *s = new Student();
    delete s; // manually 


    return 0;
}