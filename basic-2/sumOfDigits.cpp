#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // int sum = 0;

    // while (n != 0)
    // {
    //     int ld = n % 10;
    //     n = n / 10;
    //     sum += ld;
    // }
    // cout << sum << endl;

    int sum = 0;

    while (n != 0)
    {
        int ld = n % 10;
        n = n / 10;
        if (ld % 2 == 0)
        {
            sum += ld;
        }
    }
    cout << sum << endl;

    // int pro = 1;

    // while (n != 0)
    // {
    //     int ld = n % 10;
    //     n = n / 10;
    //     pro *= ld;
    // }
    // cout << pro << endl;

    return 0;
}