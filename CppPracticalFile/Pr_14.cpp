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

        void print_info () {
        cout << "Health : " << health << ", ";
        cout << "\tLevel : " << level << endl << endl;
        }

};

int main ()
{
    // Dynamically creation of object
    Player *p1 = new Player();
    *p1 = Player(88, 'C');

    p1->print_info();

    delete p1;  // We have to free the memory manually for dynamic objects

    return 0;
}