#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 70, 9};

    cout << sizeof(arr) << endl;

    int mx = arr[0];

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        // if (arr[i] > mx)
        // {
        //     mx = arr[i];
        // }

        mx = max(mx, arr[i]);
    }

    cout << mx << endl;
    // cout << "Hello World";
}