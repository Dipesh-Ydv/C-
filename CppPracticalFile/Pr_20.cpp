// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

int main ()
{
    int a = 4;

    // Creation of pointer
    int *ptr;

    // Storing address into a pointer
    ptr = &a;

    // Accessing data through pointer
    cout << "Address of a : " << ptr << endl << endl;
    cout << "Address of a : " << &a << endl << endl;
    cout << "Value of ptr : " << ptr << endl << endl;
    cout << "Value at address of ptr : " << *(&ptr) << endl << endl;
    cout << "Value of a : " << *ptr << endl << endl;
    cout << "Value at address of a : " << *(&a) << endl << endl;
    cout << "Address of ptr : " << &ptr << endl << endl;

    return 0;
}