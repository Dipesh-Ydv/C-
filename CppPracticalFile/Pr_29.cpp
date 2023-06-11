// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Addition {
    public:
        int add(int a, int b) {
            return a + b;
        }

        // Method is overloaded
        int add (int a, int b, int c) {
            return a + b + c;
        }

        float add(float a, float b, float c, float d) {
            return a + b + c + d;
        }
};

int main ()
{
    Addition a;
    int sum1 = a.add(2, 3);
    int sum2 = a.add(3, 6);
    float sum3 = a.add(4.4, 5.4, 2.1, 6.9);

    cout << "Sum1 : " << sum1 << endl
    << "Sum2 : " << sum2 << endl
    << "Sum3 : " << sum3 << endl;

    return 0;
}