#include <iostream>
using namespace std;

int main()
{

    // int arr[][2] = {{41, 54}, {47, 85}, {85, 4}, {85, 96}};

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // user input
    int arr[4][2];
    cout << "Enter the marks and roll : \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "printing marks and roll : \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}