#include <iostream>
using namespace std;

// Single Inheritance
class Animal {
    public:
    int age;
    int weight;
 
    public:
    void speaak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {

};
int main() {
    Dog d;
    d.speaak();



    return 0;
}