#include <iostream>
using namespace std;

// Hybrid Inharitance
class A {
    public:
    void fun1() {
        cout << "I'm in A" << endl;
    }
};
class D {
    public:
    void fun4() {
        cout << "I'm in D" << endl;
    }
};
class B:public A {
    public:
    void fun2() {
        cout << "I'm in B" << endl;
    }
};
class C:public A, public D {
    public:
    void fun3() {
        cout << "I'm in C" << endl;
    }
};


int main() {

    cout << "Link Through C" << endl;
    C obj1;
    obj1.fun1();
    obj1.fun4();
    obj1.fun3();

    cout << "Link Through B" << endl;
    B obj2;
    obj2.fun1();
    obj2.fun2();

    cout << "Link Through A" << endl;
    A obj3;
    obj3.fun1();

    cout << "Link Through D" << endl;
    D obj4;
    obj4.fun4();


    return 0;
}