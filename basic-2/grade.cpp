#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the marks : ";
    cin >> n;

    if (n >= 80 && n <= 100)
    {
        cout << "Verry good";
    }
    else if (n >= 60)
    {
        cout << "Good0";
    }
    else if (n >= 40)
    {
        cout << "Need progress";
    }
    else
    {
        cout << "Failed";
    }

    return 0;
}