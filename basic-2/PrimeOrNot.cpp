#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of N : ";
    cin >> n;

    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flag = false;
            break; // to get out of loop
        }
    }

    if (n == 1)
    {
        cout << "Neither Prime nor composite";
    }

    else if (flag == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Composite";
    }

    return 0;
}