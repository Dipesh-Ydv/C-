// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Number {
    public:
        // Declaration of const data member
		const int x;
	
		// const data member initialization
		Number():x(36){}

		void display() {
            cout << "Value of x : " << x << endl;
        }
};

int main ()
{
    Number n1;
    n1.display();

    // n1.x = 20;       // This will give error because 
                        // we can't change the value of const members

    return 0;
}