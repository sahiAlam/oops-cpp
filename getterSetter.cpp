#include <iostream>
#pragma pack(1)
using namespace std;
class Hero {
    private:
    int health;
    char level;
    string name;

    public:
    void print() {
        cout << "Health -> " << health << endl;
        cout << "Level -> " << level << endl;
        cout << "Name -> " << name << endl;
    }

    void setHealth(int h) {
        health = h;
    }
    int getHealth() {
        return health;
    }

    void setLevel(char ch) {
        level = ch;
    }
    int getLevel() {
        return level;
    }

    void setName(string userName) {
        name = userName;
    }
    string getName() {
        return name;
    }

};

int main() {

    Hero ramesh;
    ramesh.setHealth(80);
    ramesh.setLevel('A');
    ramesh.setName("Md Sahi Alam Khan");
    // cout << "Health -> " << ramesh.getHealth() << endl;
    // cout << "Level -> " << ramesh.getLevel() << endl;
    ramesh.print();






    cout << "size : " << sizeof(ramesh) << endl;
    return 0;
}