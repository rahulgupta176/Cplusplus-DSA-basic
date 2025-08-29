#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of arry : ";
    cin >> n;

    int arr[n];

    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printig the New array\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}