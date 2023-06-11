/*  
    All operators can be overloaded except few of them.
    List of operators which can't be overloaded :
     1. Scope resolution operator (::)
     2. sizeof() operator
     3. Member selector (.)
     4. Member pointer selector (*) 
     5. Ternary operator (?:)
*/

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
            internalMarks = i;
            externalMarks = e;
        }

        // Binary Operator Overloading
        Marks operator + (Marks m) {
            Marks temp;
            temp.externalMarks = externalMarks + m.externalMarks;
            temp.internalMarks = internalMarks + m.internalMarks;
            return temp;
        }

        void getMarks () {
            cout << "Internal marks: " << this->internalMarks << ", External marks: " << this->externalMarks << endl;
        }
};

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
            cout << "Weight in KG: " << this->kg << ", Weight in Gram: " << this->gram << endl;
        }

        // Uniary Operator Overloading
        // Note :- Functions that differ only in their return type cannot be overloaded
        
        // Overloading pre-decrement operator
        Weight operator -- () {
            Weight temp;
            temp.kg = --kg;
            temp.gram = --gram;
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
    
    Marks sem1(20,73);
    Marks sem2(30,54);
    Marks sem3(23,69);

    Marks yearlyMarks;
    yearlyMarks = sem1 + sem2;
    yearlyMarks.getMarks();

    Marks totalMarks;
    totalMarks = sem1 + sem2 + sem3;
    totalMarks.getMarks();

    // Use of post-increment operator
    Weight w1;
    w1.printWeight();
    w1++;
    w1.printWeight();

    // Use of pre-increment operator
    Weight w2(11, 5);
    ++w2;
    w2.printWeight();

    Weight w3;
    w3 = --w2;
    w3.printWeight();
    
    return 0;
}