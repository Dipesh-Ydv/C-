// Name : Dipesh Yadav
// Roll no : 210011015012
#include <iostream>
using namespace std;
 
class Number {
    private:
        int num;
    public:
        // It prevents compiler from performing implicit type conversion 
        explicit Number(int n){
            num = n;
        }
        int getNumber(){
            return num;
        }
};
 
void getNumberExternally(Number n){
    cout << n.getNumber();
}

int main()
{
    // It will through an error
    // without explicit keyword it will convert 'int' into 'Number' type automatically
    getNumberExternally(10);
    
    return 0;
}
