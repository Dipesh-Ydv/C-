// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
#include <string>
using namespace std;

class Student {
    private: 
        string name;
        int roll_no;
        int marks;
    public: 
        Student(string name, int roll_no, int marks) {
            // this is the pointer to the current object
            this->name = name;
            this->roll_no = roll_no;
            this->marks = marks;
        }

        void print_details () {
            cout << "Name : " << this->name 
            << "\nRoll No : " << this->roll_no
            << "\nMarks : " << this->marks << endl;
        }

};

int main ()
{
    Student s1("Lakshman", 9, 89);
    s1.print_details();

    return 0;
}