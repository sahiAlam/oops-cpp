#include <iostream>
using namespace std;

// Multilevel Inheritance
class Animal {

    public:
    int age;
    int weight;
    int legs;

    public: 
    void sleep() {
        cout << "Sleeping" << endl;
    }
};

class Dog: public Animal {
    public:
    void bark() {
        cout << "Barking " << endl;
    }
};

class RedDog: public Dog {
    public:
    void loudBark() {
        cout << "Loudly Barking" << endl;
    }
};

// class AllDog: public RedDog {
//     public:
//     void muchLoudBreak() {
//         cout << "Much Loudly Barking" << endl;
//     }
// };

int main() {

    RedDog dog1;
    Dog d;

    // AllDog dog;
    // dog.sleep();

    dog1.bark();
    dog1.sleep();


    return 0;
}