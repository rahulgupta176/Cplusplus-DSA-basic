#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 9, 25, 74, 264};
    int count = 0;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        if (arr[i] > 4)
        {
            count++;
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << count << endl;
}