#include <iostream>
using namespace std;

/*
    When parent and chlid class both have a same function then, the fuction will be called 
    according to the object i.e. according to the class of the object.
*/

class Parent {
    public:
        void display_msg () {
            cout << "I'm in parent class." << endl;
        }
};

class Chlid : public Parent {
    public: 
        void display_msg () {
            cout << "I'm in child class." << endl;

            // Calling of the overridden function 
            Parent :: display_msg();
        }
};

int main ()
{
    Parent p1;
    p1.display_msg();

    Chlid c1;
    c1.display_msg();

    // Accessing the display_msg() function of the Parent class.
    c1.Parent :: display_msg();

    // Pointer of Parent type which points to the object of Chlid type
    Parent *p2 = &c1;

    // Calling funtion of Parent class using pointer
    p2->display_msg();

    return 0;
}