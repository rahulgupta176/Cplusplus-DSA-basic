#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    int f;
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            cout << "Composite Numbers";
            break; // to get out of loop
        }
    }

    return 0;
}