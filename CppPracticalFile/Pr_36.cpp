// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Parent {
    public:
        // We make the parent class function as virtual function
        virtual void display () {
            cout << "In Parent class" << endl;
        }
};

class Child1 : public Parent{
    public:
        void display () {
            cout << "In first child class" << endl;
        }
};

class Child2 : public Parent {
    public: 
        void display () {
            cout << "In second child class" << endl;
        }
};

int main ()
{
    Parent p1;
    Child1 c1;
    Child2 c2;

    Parent *ptr;
    ptr = &p1;
    ptr->display();

    ptr = &c1;
    ptr->display();

    ptr = &c2;
    ptr->display();

    return 0;
}