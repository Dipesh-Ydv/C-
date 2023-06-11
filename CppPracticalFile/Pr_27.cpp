// Name : Dipesh Yadav
// Roll no : 210011015012
// C++ program for Hierarchical Inheritance
#include<iostream>
using namespace std;

// Superclass A
class A {
    public:
        void show_A() {
	        cout<<"class A"<<endl;
        }
};

// Subclass B
class B : public A {
    public:
        void show_B() {
	        cout<<"class B"<<endl;
        }
};

// Subclass C
class C : public A {
    public:
    void show_C() {
        cout<<"class C"<<endl;
    }
};

int main() 
{
    B b; 
    cout << "Calling from B: " << endl;
    b.show_B();
    b.show_A();
        
    C c; 
    cout << "Calling from C: " << endl;
    c.show_C();
    c.show_A();

    return 0;
}

