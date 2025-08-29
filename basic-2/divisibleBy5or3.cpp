#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    if (n % 5 == 0 || n % 3 == 0)
    {
        cout << "It is Divisible by  3 or 5\n";
    }
    else
    {
        cout << "it is not dibisible by both\n";
    }

    return 0;
}