// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Player {
    private:
        int health;
        char level;
    public:
        // Parameterized constructor 
        Player(int h, char l) {
            health = h;
            level = l;
            cout << "Parameterized constructor called" << endl;
        }

        void print_info () {
            cout << "Health : " << health << "\tLevel : " << level << endl;
        }
};

int main ()
{
    // Set the value of health and level at the time of the creation of object
    Player p1(98, 'A');
    p1.print_info();

    return 0;
}