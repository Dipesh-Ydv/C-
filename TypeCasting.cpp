#include <iostream>
using namespace std;

/*
    There are three types of situations can rise :
    1. Basic type to Class type
    2. Class type to Basic type 
    3. Class type to Class type 
*/

/*
Class type to Class type --> can be performed by :
                             1. Using constructor
                             2. Using Overloading Casting operator
*/
// 1. Using constructor
class CGS {
    private:
        int mtr;
        int cms;
    public:
        CGS (int mtr, int cms) {
            this->mtr = mtr;
            this->cms = cms;
        }

        int get_cms () {
            return this->cms;
        }

        int get_mtr () {
            return this->mtr;
        }

        void show_data () {
            cout << "Meters : " << this->mtr << "\tCentimeter : " << this->cms << endl;
        }

};

class FPS {
    private:
        int feet;
        int inchs;
    public:
        FPS (CGS c) {
            int x;
            x = c.get_cms() + (c.get_mtr() * 100);
            x /= 2.5;
            this->feet = x / 12;
            this->inchs = x % 12;
        }

        void show_data () {
            cout << "Feet : " << this->feet << "\tInches : " << this->inchs << endl;
        }

};

// 2. Using Overloading Casting operator
class Minute {
    public: 
        int mins;

        Minute () {
            this->mins = 0;
        }

        void show_minutes () {
            cout << "Total minutes : " << this->mins << endl;
        }
};

// Basic type to Class type --> can be performed with the help of constructor at the time of creation of object.
class Time {
    private:
        int hour, mins;
    public: 
        // Default constructor 
        Time () {
            this->hour = 0;
            this->mins = 0;
        }

        // Parameterized constructor
        Time (int time) {
            this->hour = time / 60;
            this->mins = time % 60;
        }

        void display_time (void) {
            cout << "Time = " << this->hour << "hrs and " << this->mins << "mins" << endl;
        }

        // Conversion of Class to Basic type
        operator int () {
            return (this->hour * 60 + this->mins);
        }

        // Overloading Minute class
        operator Minute () {
            Minute m;
            m.mins = (this->hour * 60) + this->mins;
            return m;
        }
};

// Class type to Basic type --> can be performed by using overloaded casting operator.

int main ()
{
    // Basic to Class type conversion
    Time T1;
    int dur = 89;

    T1 = dur;
    T1.display_time();

    // Class to Basic type conversion
    int t1 = T1;
    int t2;
    cout << "Total time in mins : " << t1 << endl;
    // Second method of conversion
    t2 = T1.operator int();
    cout << "Class to basic conversion using second type : " << t2 << endl;

    // Class to Class type conversion
    // 1. using constructor
    CGS d1(4, 23);
    d1.show_data();

    FPS d2(d1);
    d2.show_data();

    // 2. using overloaded casting operator
    Minute m;
    m = T1;
    m.show_minutes();

    return 0;
}