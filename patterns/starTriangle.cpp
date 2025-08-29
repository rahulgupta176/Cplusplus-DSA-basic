#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of Rows : ";
    cin >> n;

    // ye star
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << " * ";
    //      }
    //      cout << endl;
    //  }

    // ye number
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // ye alphabates
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (char)(j + 64) << " ";
    //     }
    //     cout << endl;
    // }

    // ye pura ek row same hoga
    //  for (int i = 1; i <= n; i++)
    //  {
    //      for (int j = 1; j <= i; j++)
    //      {
    //          cout << i<< " ";
    //      }
    //      cout << endl;
    //  }

    // ye alag wala hai bhai
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << (char)(j + 64) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}