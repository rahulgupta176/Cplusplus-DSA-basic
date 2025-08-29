#include <iostream>
using namespace std;
int power(int n, int x)
{
    if (x == 0)
        return 1;
    return n * power(n, x - 1);
}

int main()
{
    int a;
    cout << "Enter the number base : ";
    cin >> a;
    int b;
    cout << "Enter the number power : ";
    cin >> b;
    cout << power(a, b) << endl;
}
