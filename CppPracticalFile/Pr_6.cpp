// Name : Dipesh Yadav
// Roll No : 210011015012
#include <iostream>
using namespace std;

class Player {
    public:
        int health;
        char level;
        /* Static data members and functions are independent of object 
            i.e. we can use them directly without creating a object of that class. 
            Static members are declared into the class but are 
            inisalized outside the class using scope resolution operator(::). */
        static int timeRemaining;

        void printInfo () {
            cout << "Health : " << this->health << "\tLevel : " << this->level;
        }
};

// Initializing static member outside the class
int Player :: timeRemaining = 10;        

int main ()
{
    // Accessing static member without creating the object of the class
    cout << "Time Remaining : " << Player::timeRemaining << endl;

    return 0;
}