#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int a[3][3];
    int sum = 0;
    int pro = 1;

    cout << "Enter the  matrix element: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
            pro *= a[i][j];
        }
    }

    cout << sum << endl;
    cout << pro << endl;
}