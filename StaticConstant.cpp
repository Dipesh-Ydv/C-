#include <iostream>
using namespace std;

class Player {
    private:
        int health;
        char level;
        /* Static data members and functions are independent of object i.e. we can use them directly 
            without creating a object of that class. 
            Static members are declared into the class but are inisalized outside the class using
            scope resolution operator(::). */
        static int timeRemaining;

    public:
        Player () {
            this->health = 0;
            this->level = 'D';
        }

        Player (int health, char level) {
            this->health = health;
            this->level = level;
        }

        void printInfo () {
            cout << "Health : " << this->health << " Level : " << this->level;
        }
};

int Player :: timeRemaining = 10;        // Default value is zero "0".

int giveSize (int size) {
    return size;
}

int main ()
{
    Player p1;


    /* Constant variables are those variables whose value can't be changed during the program.
        Constant variables must be inisilized during their declaration else through error.
        "const" keyword is used to declare constant variables.
        NOTE : Constant objects are local to a file i.e. we can't use them into a different file. */
    int a = 4;
    const int buffSize = a;                     // It will store the value of a i.e. 4
    const int bufferSize = giveSize(10);        // It will get value through the function
    a = 10;                                     // This will not effect the value of buffSize
    cout << "Buffer Size : " << bufferSize << endl; 
    cout << "Buffer Size : " << buffSize; 

    // For using a const object outside the file we had to use "extern" keyword.

    extern const int size;

    return 0;
}