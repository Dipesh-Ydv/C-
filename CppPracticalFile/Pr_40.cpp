// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;

template<class T> T add(T &a,T &b) {  
    T result = a+b;  
    return result;  
      
}  

template<class X,class Y> void display(X a,Y b) {  
    cout << "Value of x is : " << a << endl;  
    cout << "Value of y is : " << b << endl;  
}  
  
int main()  
{  
    int a = 3;
    int b = 5;
    float c = 44.4;
    float d = 22.5;
    cout << "Addition of a and b : " << add(a, b) << endl;
    cout << "Addition of c and d : " << add(c, d) << endl;
    display(15,12.3);  
   
   return 0;  
}  