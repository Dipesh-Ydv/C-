// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

// Class having atleast one pure virtual function is called an abstract class
class Base {
    public:
        // Pure virtual function
        virtual void show () = 0;
};

class Derived : public Base {
    public:
        void show () {
            cout << "Hello Everyone" << endl;
        }
};

int main ()
{
    Derived d;
    d.show();

    return 0;
}