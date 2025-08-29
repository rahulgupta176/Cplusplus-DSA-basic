#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the 1st Numbers : ";
    cin >> a;
    cout << "Enter the 2st Numbers : ";
    cin >> b;
    cout << "Enter the 3st Numbers : ";
    cin >> c;

    // Maximum number amoung 3 numbers
    // if (a > b && a > c)
    // {
    //     cout << a << " : it is the largest";
    // }
    // else if (b > a && b > c)
    // {
    //     cout << b << " : it is the largest";
    // }
    // else
    // {
    //     cout << c << " : it is the largest";
    // }

    // Minimum number amoung 3 numbers
    if (a < b && a < c)
    {
        cout << a << " : it is the least";
    }
    else if (b < a && b < c)
    {
        cout << b << " : it is the least";
    }
    else
    {
        cout << c << " : it is the least";
    }

    return 0;
}