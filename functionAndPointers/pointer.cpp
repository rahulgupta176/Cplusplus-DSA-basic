#include <iostream>
using namespace std;
int main()
{
    int x = 55;
    cout << &x << endl;
    int *p;
    p = &x;
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
}