#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 70, 9};

    // cout << sizeof(arr) << endl;

    int ma = INT_MIN;
    int mi = INT_MAX;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        ma = max(ma, arr[i]);
    }

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        mi = min(mi, arr[i]);
    }

    cout << ma << endl;
    cout << mi << endl;
}