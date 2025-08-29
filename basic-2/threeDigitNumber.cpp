#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    if (n > 99 && n < 1000)
    {
        cout << "3 Digit Number\n";
    }
    else
    {
        cout << "It is not a 3 digit number or else number\n";
    }

    return 0;
}