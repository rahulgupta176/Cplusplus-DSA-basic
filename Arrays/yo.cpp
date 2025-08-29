#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 5, 7, 9};
    cout << sizeof(arr);
    int pro = 1;

    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        pro *= arr[i];
    }

    cout << pro;
}