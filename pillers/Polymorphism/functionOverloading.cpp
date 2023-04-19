#include <iostream>
using namespace std;

// Function Overloading
class A { 
    public:
    void sayHello() {
        cout << "Hello Sahil" << endl;
    }
    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
    int sayHello(string name, int n) {
        cout << "Hello " << name << endl;
        return 1;
    }
};
int main() {

    A obj;
    obj.sayHello();
    


    return 0;
}