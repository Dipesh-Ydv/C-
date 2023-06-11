// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Complex {
    private:
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
        // Declaration of a Friend function inside the class
        friend Complex sumComplex (Complex c1, Complex c2);

        void printInfo () {
            cout << "\nNumber : " << r << " + " << i << "i" << endl;
        }
};

// Initialization of friend function outside the class
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

    // Calling of friend function
    obj3 =  sumComplex(obj1, obj2);
    obj3.printInfo();

    return 0;
}