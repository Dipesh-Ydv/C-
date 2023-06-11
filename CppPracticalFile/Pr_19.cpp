// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Marks {
    private:
        int internalMarks;
        int externalMarks;

    public:
        Marks () {
            internalMarks = 0;
            externalMarks = 0;
        }

        Marks (int i, int e) {
            this->internalMarks = i;
            this->externalMarks = e;
        }

        // Binary Operator (+) Overloading
        Marks operator + (Marks m) {
            Marks temp;
            temp.externalMarks = externalMarks + m.externalMarks;
            temp.internalMarks = internalMarks + m.internalMarks;
            return temp;
        }

        void getMarks () {
            cout << "Internal marks: " << this->internalMarks 
            << ", External marks: " << this->externalMarks << endl << endl;
        }
};

int main ()
{
    Marks sem1(23, 73);
    Marks sem2(21, 66);
    Marks sem3(22, 69);
    Marks sem4(25, 71);

    Marks yearlyMarks1;
    yearlyMarks1 = sem1 + sem2;
    cout << "First Year Marks :" << endl;
    yearlyMarks1.getMarks();

    Marks yearlyMarks2;
    yearlyMarks2 = sem3 + sem4;
    cout << "Second Year Marks :" << endl;
    yearlyMarks2.getMarks();

    Marks totalMarks;
    totalMarks = sem1 + sem2 + sem3 + sem4;
    cout << "Total Marks :" << endl;
    totalMarks.getMarks();

    return 0;
}