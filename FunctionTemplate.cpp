#include <iostream>
using namespace std;

template <typename T>
T myMax (T x, T y) {
    return (x > y) ? x : y;
}

int main ()
{
    int max = myMax<int>(5, 3);
    cout << max << endl;
    char max2 = myMax<char>('a', 'd');
    cout << max2;
    
    return 0;
}