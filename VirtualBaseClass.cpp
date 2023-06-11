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

/*
    -> Here both class Test and class Sports have a inherited data member of class Student.
    -> When the class Result inherit both the Test and Sports classes it will have two data member and it 
       will cause ambiguity so we need to declare them as a virtual base class.
    -> So, whenever the its childs are created there should be one copy of each data member will be passed.
*/

int main ()
{

    Result dipesh;

    dipesh.set_roll_no(12);
    dipesh.set_marks(94, 98, 100);
    dipesh.set_score(96);
    dipesh.display_result();

    return 0;
}