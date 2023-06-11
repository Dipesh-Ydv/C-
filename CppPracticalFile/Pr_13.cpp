// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Demo {
    public:
        Demo() {
            cout << "Constructor called!" << endl << endl;
        }

        // Destructor is called automatically 
        // when the scope of the object is over
        ~Demo() {
            cout << "Destructor is called!" << endl << endl;
        }

        void say_hello() {
            cout << "Hi! I'm in Demo class:)" << endl << endl;
        }
};

int main ()
{
    Demo d1; 
    d1.say_hello();
       
    return 0;
}