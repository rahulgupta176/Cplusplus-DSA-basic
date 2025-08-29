#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 70, 9};

    int mx = INT_MIN;

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        mx = max(mx, arr[i]);
    }

    cout << "LArgest = : " << mx << endl;

    int smx = INT_MIN;

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] != mx)
            smx = max(smx, arr[i]);
    }
    cout << "Secound LArgest = : " << smx << endl;

    int mi = INT_MAX;
    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        mi = min(mi, arr[i]);
    }
    cout << "Smallest = : " << mi << endl;

    int smi = INT_MAX;

    for (int i = 1; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] != mi)
            smi = min(smi, arr[i]);
    }
    cout << "Secound Smallest = : " << smi << endl;
}