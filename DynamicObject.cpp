#include <iostream>
using namespace std;

class Player {
    private:
        int health;
        char level;

    public:
         int getHealth () {
            return health;
        }

        char getLevel () {
            return level;
        }

        void setHealth (int h) {
            health = h;
        }

        void setLevel (char ch) {
            level = ch;
        }

};

int main ()
{
    // Static memory allocation to the object
    Player d; 

    cout << "Health : " << d.getHealth() << endl;
    cout << "Level : " << d.getLevel() << endl;
    
    d.setHealth(80);
    d.setLevel('A');

    cout << "Health : " << d.getHealth() << endl;
    cout << "Level : " << d.getLevel() << endl;

    // Dynamic memory allocation to the object
    Player *a = new Player;
    
    a->setHealth(70);       // Alternative way : (a*).setHealth(70);
    a->setLevel('B');

    cout << "Health : " << a->getHealth() << endl;      // Alternative way : cout << (a*).getHealth()
          
    cout << "Level : " << a->getLevel() << endl;
    return 0;
}