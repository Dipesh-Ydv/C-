// Name : Dipesh Yadav
// Roll No : 210011015012
#include <iostream>
using namespace std;

class OuterClass {
public:
    OuterClass() {
        cout << "OuterClass constructor called." << endl;
    }

    class InnerClass {
    public:
        InnerClass() {
            cout << "InnerClass constructor called." << endl;
        }
    };

    void createInnerClass() {
        InnerClass inner;
    }
};

int main() {
    OuterClass outer;
    outer.createInnerClass();

    return 0;
}
