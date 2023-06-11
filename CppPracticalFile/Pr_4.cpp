// Name : Dipesh Yadav
// Roll No : 210011015012
#include <iostream>
#include <string>
using namespace std;

// Creation of a class
class Student {
    private:
        // Private data members of class
        // We can't acess them outside the class
        int roll_no;
        string name;
    protected:
        // Protected data members can only access inside the class itself
        // and by the child class.
        int marks;
    public:
        // Public data members and member fuction can be accessed from anywhere
        void say_hello () {
            cout << "Hi! I'm a student." << endl;
        }

        // Private and protected data members can be accessed into the class
        void set_roll_no (int r) {
            roll_no = r;
        }

        void set_name (string n) {
            name = n;
        }

        void set_marks (int m) {
            marks = m;
        }

        int get_roll_no () {
            return roll_no;
        }
};

int main ()
{
    // Creation of object of class Student
    Student s1;    

    // Not able to access (will throw an error)
    // s1.roll_no = 12;
    // s1.name = "Ram";

    // Able to access
    s1.say_hello();

    // Private data members can be accessed using function
    s1.set_roll_no(12);
    s1.set_name("Rama");
    s1.set_marks(99);

    int roll_no = s1.get_roll_no();
    cout << "Roll No : " << roll_no << endl;

    return 0;
}