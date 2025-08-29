#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the 2nd number : ";
    cin >> b;

    // int result = sum(a, b);
    // cout << result << endl;

    cout << sum(a, b) << endl;
    ;
}