#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int temp = n;

    int rev = 0;
    while (n != 0)
    {
        int ld = n % 10;
        rev *= 10;
        rev += ld;
        n /= 10;
    }

    cout << rev << endl;

    int sum = temp + rev;

    cout << sum << endl;

    return 0;
}