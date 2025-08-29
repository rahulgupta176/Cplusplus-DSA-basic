#include <iostream>
using namespace std;

int main()
{

    int arr[2][3];

    cout << "Please enter the elements of arry \n";
    for (int i = 0; i < 2; i++) // rows
    {
        for (int j = 0; j < 3; j++) // col
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing the elemnts of arrays\n";

    for (int i = 0; i < 2; i++) // rows
    {
        for (int j = 0; j < 3; j++) // col
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Transpose of an array\n";

    for (int i = 0; i < 3; i++) // rows
    {
        for (int j = 0; j < 2; j++) // col
        {
            cout << arr[j][i] << " ";
        }

        cout << endl;
    }
}