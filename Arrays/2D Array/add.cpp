#include <iostream>
using namespace std;

int main()
{

    int a[3][3];
    int b[3][3];
    int c[3][3];

    cout << "Enter the 1st matrix element: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the 2st matrix element: ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << endl;

    cout << "adding  matrix element: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = (a[i][j] + b[i][j]);
        }
    }

    cout << "printing 3rd on adding  matrix element: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}