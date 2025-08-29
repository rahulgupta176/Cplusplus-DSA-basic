#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 25, 74, 264};
    int even = 0;
    int odd = 0;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (i % 2 != 0)
        {
            odd += arr[i];
        }
        else
        {
            even += arr[i];
        }
    }

    // for (int i = 0; i < sizeof(arr) / 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout << "Enven no. " << even << endl;
    cout << "odd no. " << odd << endl;
    cout << "Diff : " << even - odd;
}