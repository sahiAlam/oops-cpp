#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    //Default Constructor
    Hero() {
        cout << "contructor called.." << endl;
    }
    
    // Hero(int health) {
    //    this -> health = health;
    //    cout << health << endl;
    // }

    //Parameterised Constructor
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;

        cout << "Health -> " << health << endl;
        cout << "Level -> " << level << endl;
    }

    void print() {
        cout << "Health : " << health << endl;
        cout << "Level : " << level << endl;
    }

    int getHealth() {
        return health;
    }
    void setHealth(int h) {
        health = h;
    }

};
int main() {

    Hero ramesh(100, 'A');
    // ramesh.print();
    // Hero *h = new Hero(10);

    Hero temp(80, 'B');
    // temp.print();





    return 0;
}