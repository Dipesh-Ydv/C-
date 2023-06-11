// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Player {
    private:
        int health;
        char level;
    public:
        Player() {
            health = 0;
            level = 'D';
        }

        Player(int h, char l) {
            health = h;
            level = l;
        }

        // Copy constructor
        Player(Player &temp) {
            health = temp.health;
            level = temp.level;
            cout << "Copy constructor called." << endl;
        }

        void print_info () {
        cout << "Health : " << health << ", ";
        cout << "\tLevel : " << level << endl << endl;
    }

};

int main ()
{
    Player p1(69, 'A');
    p1.print_info();

    // Use of copy constructor
    Player p2(p1);
    p2.print_info();

    return 0;
}