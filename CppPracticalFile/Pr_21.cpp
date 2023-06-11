// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

int main ()
{
    int a = 44;
    int *ptr = &a;

    cout << "Address of a is : " << ptr << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nValue of ptr after " << i+1 << " increment : " << ptr++ << endl;
    }

    return 0;
}