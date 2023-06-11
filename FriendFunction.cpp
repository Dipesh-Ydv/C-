#include <iostream>
using namespace std;

/* 
   Properties of friend function :
    -> It is intisialized outside the class.
    -> It is not in the scope of the class.
    -> As it is not in the scope so, it is not called by the object of that class i.e. "obj.friendFunction()" is Invalid.
    -> It can access all the private data members of the class.
    -> Usually takes objects as arguments.
    -> It can be declared in both public and private section.
    -> It can't access data members directly but require object for accessing data members.
*/

class Complex {
    int r, i;

    public:
        Complex () {
            this->r = 0;
            this->i = 0;
        }

        Complex (int r, int i) {
            this->r = r;
            this->i = i;
        }

        void setNum (int r, int i) {
            this->r = r;
            this->i = i;
        }
        
        // Friend function allow to do anything thing with the private members of the class
        friend Complex sumComplex (Complex c1, Complex c2);

        void printInfo () {
            cout << "Number : " << r << " + " << i << "i" << endl;
        }
};

Complex sumComplex (Complex c1, Complex c2) {
    Complex temp;
    temp.setNum((c1.r + c2.r), (c1.i + c2.i));
    return temp;
} 

int main ()
{
    Complex obj1, obj2, obj3;
    obj1.setNum(4, 3);
    obj1.printInfo();

    obj2.setNum(5, 8);
    obj2.printInfo();

    obj3 =  sumComplex(obj1, obj2);
    obj3.printInfo();

    return 0;
}