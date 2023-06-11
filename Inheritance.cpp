#include <iostream>
using namespace std;

/* 
    MODE OF INHERITACE :

        Acess modifier of parent class :        Mode of inheritance :       Final Access :
           
            Public                                  Public                  Public
            Public                                  Protected               Protected
            Public                                  Private                 Private

            Protected                               Public                  Protected
            Protected                               Protected               Protected
            Protected                               Private                 Private

            NOTE : Private data member of any parent class are not accessible by the child class.


    Protected : these data members and member functions can be accessible in child class using getter and setters.

    Types of Inheritance :
        1. Single           --> class A : access_modifier class B

        2. Multi-level      --> class B : access_modifier class A
                                class C : access_modifier class B

        3. Multiple         --> A single class having more than 1 parent.
                                SYTNAX -> class C : access_modifier class A, access_modifier class B

        4. Hierarchical     --> One class serve as parent class for more than 1 class.
                                SYTNAX -> class B : access_modifier class A
                                          class C : access_modifier class A

        5. Hybrid           --> Combination of more than 1 type of inheritance.

    NOTE : Inheritance ambiguity can be resolved by Scope Resolution Operator (::).
           SYTNAX -> obj.class_name::function_name();
*/

class Human {
    private:
        int height;
        int weight;

    public:
        int age;

        int getAge () {
            return this->age;
        }

};

class Male : public Human {
    public:
    string name;

    void sleep () {
        cout << "Male sleeping";
    }

};

int main ()
{
    Male m1;

    // cout << m1.age << endl;      // can't access directly because declared private in parent class

    return 0;
}