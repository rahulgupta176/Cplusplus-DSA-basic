#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    // arr[0] = 57;
    // arr[1] = 75;
    // arr[2] = 85;
    // arr[3] = 25;
    // arr[4] = 63;

    cout << "Enter the element : \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;
    cout << "Printig the array\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}