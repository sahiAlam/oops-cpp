#include <iostream>
using namespace std;
class Employe {

    private:
    int age;
    int sallary;
    char bGroup;

    public:
    Employe(int age) {
        cout << "Default constructor called " << endl;
        this -> age = age;
        cout << "My age is " << age << endl;
    }

    void print() {
        cout << "Age : " << age << endl;
        cout << "Sallary : " << sallary << endl;
        cout << "Blood Group : " << bGroup << endl;
    }

    int getAge () {
        return age;
    }
    void setAge(int userAge) {
        age = userAge;
    }
    int getsallary () {
        return sallary;
    }
    void setsallary(int userSallary) {
        sallary = userSallary;
    }
    char getBGroup () {
        return bGroup;
    }
    void setBGroup(char group) {
        bGroup = group;
    }


};

int main() {

    Employe *e = new Employe(28);

    e->setAge(21);
    e->setsallary(2100);
    e->setBGroup('A');

    cout << endl << "Access using (->) operator..." << endl;
    cout << "Age -> " << e->getAge() << endl;
    cout << "Sallary -> " << e->getsallary() << endl;
    cout << "Blood Group - > " << e->getBGroup() << endl;  

    cout << endl << "Access using (.) operator..." << endl;
    cout << "Age -> " << (*e).getAge() << endl;
    cout << "Sallary -> " << (*e).getsallary() << endl;
    cout << "B Group -> " << (*e).getBGroup() << endl;
    

    cout << endl << "Access using print()..." << endl;
    e->print();


    return 0;
}