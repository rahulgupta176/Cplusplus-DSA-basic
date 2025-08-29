#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
    {
        cout << "The no. is divisible by 3 or 5 but not 15\n";
    }
    else
    {
        cout << "The no. is NOT divisible by 3 or 5 but not 15\n";
    }

    return 0;
}