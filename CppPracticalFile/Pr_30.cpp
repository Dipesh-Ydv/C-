// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

/*
    When parent and chlid class both have a same function then, the fuction will 
    be called according to the object i.e. according to the class of the object.
*/

class Parent {
    public:
        void display_msg () {
            cout << "I'm in parent class." << endl;
        }
};

class Chlid : public Parent {
    public: 
        // Method is overridden in child class
        void display_msg () {
            cout << "I'm in child class." << endl;
        }
};

int main ()
{
    Parent p1;
    p1.display_msg();

    Chlid c1;
    c1.display_msg();

    return 0;
}