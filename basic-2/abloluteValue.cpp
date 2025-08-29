#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;

    // if (n >= 0)
    // {
    //     cout << n << endl;
    // }
    // else
    // { // n<0
    //     cout << -n;
    // }

    if (n < 0)
    {
        n = -n;
    }

    cout << n;
}