#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the 1st Side : ";
    cin >> a;
    cout << "Enter the 2st Side : ";
    cin >> b;
    cout << "Enter the 3st Side : ";
    cin >> c;

    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << "Valid Tringle" << endl;
    }
    else
    {
        cout << "Not Valid Tringle";
    }

    return 0;
}