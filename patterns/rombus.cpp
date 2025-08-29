#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no. of Rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n - i + 1; j++) // spaces
        {
            cout << "   ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}