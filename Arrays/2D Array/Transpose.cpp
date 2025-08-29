#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int a[4][3];
    int b[3][4];

    cout << "chalo transpose create kera to sara se input de do\n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            b[i][j] = a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << b[i][j] << " ";
        }

        cout << endl;
    }
}