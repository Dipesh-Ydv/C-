// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Complex {
    int r, i;
    
    public:
    void setData (void) {
        cout << "Enter the real part : ";
        cin >> r;
        cout << "Enter the imaginary part : ";
        cin >> i;
    }

    void setData (int r, int i) {
        this->r = r;
        this->i = i;
    }

    // Objects are passed as argument in addData function.
    void addData (Complex o1, Complex o2) {
        r = o1.r + o2.r;
        i = o1.i + o2.i;
    }

    void printData () {
        cout << "Data of object is : " << r << " + " << i << "i" << endl;
    }

};

int main ()
{
    Complex c1, c2, c3;
    c1.setData();
    c1.printData();

    c2.setData();
    c2.printData();

    // Passing object as argument
    c3.addData(c1, c2);
    c3.printData();
    
    return 0;
}