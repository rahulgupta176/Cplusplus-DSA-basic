#include <iostream>
using namespace std;

int change(int brr[])
{
    return brr[0] = 863465;
}

int main()
{
    int arr[] = {5, 8, 7, 4};

    cout << "Printing the array\n";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    change(arr);
    cout << "Printing the array\n";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}