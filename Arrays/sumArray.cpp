#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 7, 4, 5, 8, 7, 4, 6, 45};
    cout << sizeof(arr);

    int sum = 0;

    for (int i = 0; i < 9; i++)
    {
        sum += arr[i];
    }

    cout << sum;
}