#include <iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    //Default Constructor
    Hero() {
        cout << "Default contructor called.." << endl;
    }

    //Parametersised Constructor
    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //Copy Constructor
    Hero(Hero& temp) {
        cout << "Copy Constructor called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print() {
        cout << "Health : " << this -> health << endl;
        cout << "Level : " << this -> level << endl;
    }

    int getHealth() {
        return health;
    }
    void setHealth(int health) {
        this -> health = health;
    }
    int getLevel() {
        return health;
    }
    void setLevel(int level) {
        this -> level = level;
    }


};
int main() {
    Hero p;

    Hero S(70, 'C');
    S.print();

    //Copy constructor
    Hero R(S);
    R.print();



    return 0;
}