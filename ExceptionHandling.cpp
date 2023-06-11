#include <iostream>
using namespace std;

class Demo {
    public:
        Demo () {
            cout << "It is my demo class" << endl;
        }
};
 
int main ()
{
    int b ;
    cin >> b;

    try {
        if (b == 0) {
            throw Demo();
        } else {
            cout << "OK" << endl;
        }
    }
   
    catch (Demo &d1) {
        cout << "Jai mata di" << endl;
    }

    return 0;
}