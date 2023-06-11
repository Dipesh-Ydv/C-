// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

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

int main ()
{
    Time T1(88);

    // Class to Basic type conversion
    int t1 = T1;
    int t2;
    cout << "Total time in mins : " << t1 << endl;
    // Second method of conversion
    t2 = T1.operator int();
    cout << "Class to basic conversion using second type : " << t2 << endl;

    return 0;
}