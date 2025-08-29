#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. : ";
    cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "The Number is Even" << endl;
    //     cout << "Good luck";
    // }
    // else
    // {
    //     cout << "it is a odd number\n";
    //     cout << "your bad luck";
    // }

    if (n % 5 == 0)
    {
        cout << "The Number is Divisible by 5" << endl;
        cout << "Good luck";
    }
    else
    {
        cout << "it is a not divisible by 5 number\n";
        cout << "your bad luck";
    }
}