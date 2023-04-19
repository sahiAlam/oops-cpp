#include <iostream>
using namespace std;

// Multiple Inheritance
class Rahil {
    public:
    int age;
    float height;
    int weight;
    char gender;

    public:
    void read() {
        cout << "Rahil is Reading" << endl;
    }
};
class Mala {
    public:
    int age;
    float height;
    int weight;
    char gender;

    void read() {
        cout << "Mala is Reading" << endl;
    }
};

// Multiple Inheritance 
class Human: public Rahil, public Mala {
    public:
    void myFun() {
        cout << "Boath are brother and sister" << endl;
    }
};

int main() {

    Human man1;
    Mala man2;

    man1.myFun();
    man1.Rahil::read();
    man1.Mala::read();


    return 0;
}