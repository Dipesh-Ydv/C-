#include <iostream>
using namespace std;

/*
    Virtual function is a function which is defined into the base class and overriden into the derived class.
    -> It ensure that correct function is called for an object regardless the type of the pointer used for 
       function call.
    -> Mainly used to achieve runtime polymorphism.
    -> Resolving of function call is done at runtime.

    # Rules for virtual function: 
     1. It can't be static.
     2. It can be a friend fuction of another class.
     3. Should be access using pointer to achieve runtime polymorphism.
     4. Destructor can be virtual, but constructor can't.

     # Limitation: 
      1. Slower due to the virtual mechanism and makes it more diffuclt for the compiler to optimize
         because it doesn't know which function to execute at compile time.
      2. Difficult to debug.


    Early Binding : When the function is binded at the compile time.
    Late Binding : When the function is binded at the runtime.
*/
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