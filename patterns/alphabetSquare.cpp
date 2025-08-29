#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the no. of Rows : ";
    cin >> m;
    cout << "Enter the no. of Coloms : ";
    cin >> n;

    // ye rectangle hai
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << " * ";
    //         /* code */
    //     }

    //     cout << endl;
    // }

    // Ye normal abcd hai
    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << (char)(j + 64) << " ";
    //     }

    //     cout << endl;
    // }

    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << (char)(i + 64) << " ";
    //     }

    //     cout << endl;
    // }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (char)(j + 96) << " ";
        }

        cout << endl;
    }
}