// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class A {
    protected:
        int a, b;   
    public: 
        A () {
            a = 0;
            b = 0;
        }

        A (int a, int b) {
            this->a = a;
            this->b = b;
        }

        void display_no (void) {
            cout << "Value of a : " << this->a << endl
            << "Value of b : " << this->b << endl;
        }
};

class B : public A {
    private:
        int c;
    public:
        B (int a, int b, int c) : A(a, b) {
            this->c = c;
        }

        void display_no (void) {
            A :: display_no();
            cout << "Value of c : " << this->c << endl;
        }
};

int main ()
{
    B obj1(1, 2, 4);
    obj1.display_no();

    A obj2;
    obj2 = obj1;            // It will only fetch value of a and b from the obj1
    obj2.display_no();

    return 0;
}