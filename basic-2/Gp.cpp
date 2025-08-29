#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :  ";
    cin >> n;

    // gp series - 1 2 4 8 16 ....
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a *= 2;
    }

    cout << endl;

    // 5 15 45 ....
    int b = 5;
    for (int i = 1; i <= n; i++)
    {
        cout << b << endl;
        b *= 3;
    }
    cout << endl;
    // 3 12 48
    int c = 3;
    for (int i = 1; i <= n; i++)
    {
        cout << c << endl;
        c *= 4;
    }

    return 0;
}