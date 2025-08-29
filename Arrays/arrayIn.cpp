#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 7, 9};

    cout << "Printig the array\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    arr[0] = 7854;

    cout << "Printig the New array\n";
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}