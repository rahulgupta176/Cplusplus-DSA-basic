#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 70, 9};

    cout << sizeof(arr) << endl;

    int mi = arr[0];

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] < mi)
        {
            mi = arr[i];
        }

        // mi = min(mi, arr[i]);
    }

    cout << mi << endl;
    // cout << "Hello World";
}