#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 25, 74, 264};

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (i % 2 != 0)
        {
            arr[i] *= 2;
        }
        else
        {
            arr[i] += 10;
        }
    }

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        cout << arr[i] << " ";
    }
}