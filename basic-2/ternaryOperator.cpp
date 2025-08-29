#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // even and odd pakharna hai ternary operator se

    (n % 2 == 0) ? cout << "It is A even number" : cout << "it is Odd";

    return 0;
}