#include<iostream>
using namespace std;

class Game {
    public:
        int health;
    private:
        char level;
        
    public:
        int getHealth () {
            return health;
        }

        char getLevel () {
            return level;
        }

        void setLevel (char ch) {
            level = ch;
        }

        void setHealth (int h) {
            health = h;
        }

};

int main() {

    Game g;
    // cout<< g.level;
    // cout<< g.getLevel() << endl;
    g.setLevel('A');
    cout << g.getLevel() << endl;
    cout<<"size : " << sizeof(g);

    return 0;
}