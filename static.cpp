#include <iostream>
using namespace std;

class Hero {

    public:
    int age;
    int health;
    int level;

    static int timeToComplete; // Static member

    static int hello() {
        return timeToComplete;
    }

};

int Hero::timeToComplete = 10;


int main() {

    // cout << Hero::timeToComplete << endl;
    cout << Hero::hello() << endl;

    return 0;
}