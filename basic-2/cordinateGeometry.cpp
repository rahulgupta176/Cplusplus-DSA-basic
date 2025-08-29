#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the cordinate for X : ";
    cin >> x;
    cout << "Enter the cordinate for Y : ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << x << " and" << y << " : are in first Quadrent";
    }
    else if (x > 0 && y < 0)
    {
        cout << x << " and" << y << " : are in Forth Quadrent";
    }
    else if (x < 0 && y < 0)
    {
        cout << x << " and" << y << " : are in 3 Quadrent";
    }
    else
    {
        cout << x << " and" << y << " : are in 2nd Quadrent";
    }

    return 0;
}