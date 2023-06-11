// Name : Dipesh Yadav
// Roll No : 210011015012
#include <iostream>
#include <string>
using namespace std;

// Creation of a class
class Student {
    public:
        // Data members of class
        int roll_no;
        string name;
        // Declaration of Member function inside the class
        void say_hello ();
};

// Initialization of member function outside the class
void Student :: say_hello () {
    cout << "Hi! I'm a student";
}

int main ()
{
    // Creation of object of class Student
    Student s1;    

    // Accessing data members of class Student
    s1.roll_no = 12;
    s1.name = "Shyam";
    cout << "Roll No : " << s1.roll_no 
    << endl << "Name : " << s1.name << endl;

    // Accessing member function of class Student
    s1.say_hello();
    
    return 0;
}