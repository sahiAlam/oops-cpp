#include <iostream>
using namespace std;
class Human {

    public:
    int age;
    int roll;
    int height;

    protected:
    int mySrore = 10;

};
class Male: public Human {

    public:
    string color;

    void attack() {
        cout << "Male can attack.." << endl;
    }

    void displayScore() {
        cout << "My score " << mySrore << endl;
    }

};

int main() {

    Male m1;
    cout << m1.age << endl;
    m1.displayScore();



    // Male object1;

    // cout << object1.age << endl;
    // cout << object1.roll << endl;
    // cout << object1.height << endl;
    // cout << object1.color << endl;
    // object1.attack();

    return 0;
}