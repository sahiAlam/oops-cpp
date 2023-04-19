#include <iostream>
using namespace std;

class Student {

    private:
    int age;
    int roll;
    int printAge() {
        cout << "Age -> " << this -> age << endl;
    }


};
int main() {

    Student *s = new Student();
    Student s;

    cout << "Sab sahi chal raha hain.." << endl;

    return 0;
}