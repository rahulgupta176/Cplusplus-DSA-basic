#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number :  ";
    cin >> n;

    // ap series given 1 , 3 5 7 9

    // for (int i = 1; i <= 2 * n - 1; i += 2)
    // {
    //     cout << i << endl;
    // }

    // cout << endl;

    // 4 7 10 13 16 ....

    // for (int i = 4; i <= 3 * n + 1; i += 3)
    // {
    //     cout << i << endl;
    // }

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a += 3;
    }

    return 0;
}