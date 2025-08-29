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

    // Maximum no.
    // if (a > b)
    // {
    //     if (a > c)
    //     {
    //         cout << a << " : is the largest";
    //     }
    //     else
    //     {
    //         cout << c << " : is the largest";
    //     }
    // }
    // else
    // {
    //     if (b > c)
    //     {
    //         cout << b << " : is the largest";
    //     }
    //     else
    //     {
    //         cout << c << " : is the largest";
    //     }
    // }

    // minimum no. because in lecture it age and find youngest
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " : is the Youngest";
        }
        else
        {
            cout << c << " : is the Youngest";
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " : is the Youngest";
        }
        else
        {
            cout << c << " : is the Youngest";
        }
    }

    return 0;
}