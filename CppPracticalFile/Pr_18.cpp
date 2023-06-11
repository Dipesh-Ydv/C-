// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

class Weight {
    private:
        int kg, gram;

    public:
        Weight () {
            this->kg = 0;
            this->gram = 0;
        }

        Weight (int k, int g) {
            this->gram = g;
            this->kg = k;
        }

        void printWeight () {
            cout << "Weight in KG: " << this->kg << ", Weight in Gram: " << this->gram << endl << endl;
        }

        // Uniary Operator Overloading
        
        // Overloading pre-decrement operator
        Weight operator -- () {
            Weight temp;
            temp.kg = --kg;
            temp.gram = --gram;
            return temp;
        }

        // Overloading post-decrement operator
        Weight operator -- (int) {
            Weight temp;
            temp.kg = kg--;
            temp.gram = gram--;
            return temp;
        }

        // Overloading pre-increment operator 
        void operator ++ () {
            ++(kg);
            ++(gram);
        }

        // Overloading post-increment operator
        void operator ++ (int) {
            (kg)++;
            (gram)++;
        } 

};

int main ()
{
    // Use of post-increment operator
    Weight w1(6, 9);
    cout << "Weight before post-increment:" << endl;
    w1.printWeight();
    w1++;
    cout << "Weight after post-increment:" << endl;
    w1.printWeight();

    // Use of pre-increment operator
    cout << "Weight before pre-increment:" << endl;
    w1.printWeight();
    ++w1;
    cout << "Weight after pre-increment:" << endl;
    w1.printWeight();

    // Use of post-decrement operator
    cout << "Weight before pre-decrement:" << endl;
    w1.printWeight();
    w1--;
    cout << "Weight after pre-decrement:" << endl;
    w1.printWeight();

    // Use of pre-decrement operator
    cout << "Weight before pre-decrement:" << endl;
    w1.printWeight();
    --w1;
    cout << "Weight after pre-decrement:" << endl;
    w1.printWeight();

    return 0;
}