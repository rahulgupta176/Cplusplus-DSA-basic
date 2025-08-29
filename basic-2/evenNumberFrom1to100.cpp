#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    // // odd numbers 100 times loops chal rehe h bhai
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // // even numbe 100 times loops chal rehe h bhai
    // for (int i = 1; i <= 100; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // even but 50 times loops chalege
    // for (int i = 2; i <= 100; i += 2)
    // {
    //     cout << i << endl;
    // }

    // // odd but 50 times loop chalege
    // for (int i = 1; i <= 100; i += 2)
    // {
    //     cout << i << endl;
    // }

    // 19 table

    // for (int i = 19; i <= 190; i++)
    // {
    //     if (i % 19 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    // another method for 19 table

    // for (int i = 19; i <= 190; i += 19)
    // {
    //     cout << i << endl;
    // }

    for (int i = n; i <= 10 * n; i += n)
    {
        cout << i << endl;
    }

    return 0;
}