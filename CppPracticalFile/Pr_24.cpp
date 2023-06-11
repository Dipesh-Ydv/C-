// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Human {
    private:
        int height;
        int weight;
        int age;
    public:
        void walk () {
            cout << "Human Walks" << endl << endl;
        }

};

class Male : public Human {
    public:
    string name;

    void sleep () {
        cout << "Male sleeping" << endl;
    }

};

int main ()
{
    Male m1;

    // Able to access the public mehtod of parent class
    m1.walk();
    m1.sleep();

    return 0;
}