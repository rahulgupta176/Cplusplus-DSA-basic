#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int a[3][3];

    cout << "Enter the  matrix element: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mx = max(mx, a[i][j]);
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mn = min(mn, a[i][j]);
        }
        cout << endl;
    }

    cout << "Maximum element " << mx << endl;
    cout << "minimum element " << mn << endl;
}