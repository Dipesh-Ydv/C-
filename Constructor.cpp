#include <iostream>
using namespace std;

class Player {
    int health;
    char level;

    public:

    // Non-parameterised constructor (Default Constructer)
    // Constructor is a self calling function without any return datatype
    Player () {
        cout << "Constructor is called" << endl;    // It will be called automatically with the creation of class
    }

    // Parameterised constructor
    Player (int health, char level) {
        // this is the pointer to the current object
        this -> health = health;
        this -> level = level;
    }

    // Copy constructor 
    Player (Player &temp) {                         // We use pass by address else it will stuck into a loop
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void printInfo () {
        cout << "Health : " << this -> health << ", ";
        cout << "Level : " << this -> level << endl << endl;
    }

    // Destructor
    ~Player () {
        cout << "Destructor called" << endl;
    }
};

int main ()
{
    // Statically creation of object

    // Player d;
    // d = Player(90,'A');

    Player d(90, 'A');
    d.printInfo();      

    // Dynamically creation of object
    
    // Player *a = new Player();
    // *a = Player(99, 'B');
 
    Player *a = new Player(99, 'B');
    a -> printInfo();
    delete a;                           // For dynamically allocated object destructor has to be called manually

    // Use of copy constructor
    Player  x(d);       
    x.printInfo();                      // Destructor will be called automatically

    return 0;
}