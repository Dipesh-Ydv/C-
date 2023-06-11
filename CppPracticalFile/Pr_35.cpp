// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

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

int main ()
{
    // Class to Class type conversion
    CGS d1(4, 23);
    d1.show_data();

    FPS d2(d1);
    d2.show_data();

    return 0;
}