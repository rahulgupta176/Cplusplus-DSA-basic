#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int a[5][4];
    int sum = 0;
    int pro = 1;

    cout << "Enter the  matrix element: ";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            sum += a[i][j];
            pro *= a[i][j];
        }
    }

    cout << sum << endl;
    cout << pro << endl;
}