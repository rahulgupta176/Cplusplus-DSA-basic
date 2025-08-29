#include <iostream>
using namespace std;

int main()
{
    int x = 85;
    int *ptr = &x;
    cout << x << endl;
    cout << *ptr << endl;
    *ptr = 25;
    cout << x << endl;
}