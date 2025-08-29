#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter the 1st num : ";
    cin >> n1;

    int n2;
    cout << "Enter the 2st num : ";
    cin >> n2;

    char op;
    cout << "Enter the Operator : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;

    case '-':
        cout << n1 - n2 << endl;
        break;

    case '/':
        cout << n1 / n2 << endl;
        break;

    case '*':
        cout << n1 * n2 << endl;
        break;

    default:
        cout << "Invalid operator" << endl;
        break;
    }
    return 0;
}