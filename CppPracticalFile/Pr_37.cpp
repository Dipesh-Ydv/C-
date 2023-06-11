// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

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