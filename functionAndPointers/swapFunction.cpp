#include <iostream>
using namespace std;
void swap(int &a, int &b)
{

    cout << &a << endl;
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 5;
    int y = 2;

    cout << &x << endl;

    cout << x << "  " << y << endl;

    swap(x, y);

    cout << x << "  " << y << endl;
}