#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the size of arry : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing the arrays \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}