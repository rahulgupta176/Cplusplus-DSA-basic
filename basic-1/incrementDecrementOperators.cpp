#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    cout << x << endl;
    x++; // x =x+1 post increment
    cout << x << endl;
    x--; // x = x-1
    cout << x << endl;
    ++x; // pre increment
    cout << x << endl;
    --x;
    cout << x << endl;
    cout << endl;

    int y = 5;
    cout << y << endl;
    cout << y++ << endl; // post
    cout << y << endl;

    cout << endl;

    int z = 5;

    cout << z << endl;
    cout << ++z << endl; // post
    cout << z << endl;

    return 0;
}