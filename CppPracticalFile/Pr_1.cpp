// Name : Dipesh Yadav
// Roll No : 210011015012
#include <iostream>
#include <string>
using namespace std;

// Creation of a class
class Student {
    // Data members of class
    int roll_no;
    string name;
    public:
        // Member function of a class
        void say_hello () {
            cout << "Hi! I'm a student." << endl;
        }
};

int main ()
{
    // Creation of object of a class 
    Student s1;   
     
    return 0;
}