// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

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

};

int main ()
{
    // Basic to Class type conversion
    Time T1;
    int dur = 89;

    T1 = dur;
    T1.display_time();

    return 0;
}