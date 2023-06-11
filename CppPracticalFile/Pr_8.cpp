// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Player {
    private:
        int health;
        char level;
    public:
        // Default constructor
        Player() {
            this->health = 0;
            this->level = 'D';
            cout << "Default constructor called" << endl;
        }

        void print_info () {
            cout << "Health : " << health << "\tLevel : " << level << endl;
        }
};

int main ()
{
    Player p1;
    p1.print_info();

    return 0;
}