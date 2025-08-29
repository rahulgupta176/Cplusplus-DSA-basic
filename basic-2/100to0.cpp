#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int f;
    for (int i = n / 2; i >= 1; i--)
    {
        // cout << i << " ";

        if (n % i == 0)
        {
            cout << i << " ";
            break; // to get out of loop
        }
    }

    return 0;
}