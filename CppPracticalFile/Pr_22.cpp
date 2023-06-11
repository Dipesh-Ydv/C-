// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

int main ()
{
    // Dynamically allocated memory is allocated into Heap 
    // whereas local variables are stored into the Stack 
    int *p = new int;
    *p = 10;
    cout << "Value of p : " << *p << endl;

    // nothrow will return NULL pointer if memory is not available to allocate
    int *ptr = new(nothrow) int [10];\

    if (!ptr) {
        cout << "Allocation of memory failed." << endl;
    } else {
        for (int i = 0; i < 10; i++) {
            ptr[i] = i + 3;
            cout << "Value at " << i+1 << " block : " <<  ptr[i] << endl;
        }
    }

    // Deallocating memory 
    delete p;
    delete[] ptr;

    return 0;
}