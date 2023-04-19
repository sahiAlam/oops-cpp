#include <iostream>
using namespace std;

class Hero {
    // properties
    private: 
    int health;
    int age;
    char level;

    public:
    char name[100];

    int getHealth();
    int getAge();
    int getLevel();

    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setLevel(char level) {
        this->level = level;
    }
  
    void print() {
        cout << "Level is -> " << level << endl;
        cout << "Health is -> " << health << endl;
        cout << "Age is -> " << age << endl;
        cout << "Address of ramesh -> " << this << endl;
    }

};

int Hero::getHealth() {
    return health;
}
int Hero::getAge() {
    return age;
}
int Hero::getLevel() {
    return level;
}

int main () {

    // creation of Object
    Hero ramesh;
    ramesh.setHealth(50);
    ramesh.setAge(40);
    ramesh.setLevel('A');

    ramesh.print();

    cout << "Address of ramesh -> " << &ramesh << endl;
    cout << "Size : " << sizeof(ramesh) << endl;

    return 0;
}