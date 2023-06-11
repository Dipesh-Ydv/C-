// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void set_roll_no (int roll_no) {
            this->roll_no = roll_no;
        }

        void display_roll_no (void) {
            cout << "Roll Number : " << this->roll_no << endl;
        }
};

class Test :  virtual public Student {
    protected:
        float maths, physics, computer;
    public: 
        void set_marks (float maths, float physics, float computer) {
            this->maths = maths;
            this->physics = physics;
            this->computer = computer;
        }

        void display_marks (void) {
            cout << "Maths : " << this->maths << endl
            << "Physics : " << this->physics << endl
            << "Computer : " << this->computer << endl;
        }
};

class Sports :  virtual public Student {
    protected:
        int score;
    public:
        void set_score (int score) {
            this->score = score;
        }

        void display_score (void) {
            cout << "Score : " << this->score << endl;
        }
} ;

class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display_result (void) {
            this->total = this->maths + this->physics + this->computer + this->score;
            display_roll_no();
            display_marks();
            display_score();
            cout << "Total percentage : " << this->total/4 << "%" << endl;
        }
};

int main ()
{

    Result ram;

    ram.set_roll_no(12);
    ram.set_marks(94, 98, 100);
    ram.set_score(96);
    ram.display_result();

    return 0;
}