// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        Point(int i = 0, int j = 0):x(i), y(j) {}
        
        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

};

int main ()
{
    Point t1(10, 15);
    cout << "Value of x : " << t1.getX() << endl;
    cout<< "\nValue of y : " << t1.getY();

    return 0;
}