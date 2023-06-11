// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Player {
    private:
        int *health;
        char *level;
    public:
        Player() {
            health = new int;
            level = new char;
            *health = 0;
            *level = 'D';
        }

        // Dynamic constructor 
        Player(int h, char l) {
            // Memory is allocated dynamically with the help of 'new' keyword
            health = new int;
            level = new char;
            *health = h;
            *level = l;
            cout << "Dynamic constructor called" << endl;
        }

        void print_info () {
            cout << "Health : " << *health << "\tLevel : " << *level << endl;
        }
};

int main ()
{
    // Allocates memory at run time 
    Player p1(82, 'B');
    p1.print_info();

    Player p2;
    p2.print_info();

    return 0;
}