#include <iostream>
using namespace std;
int main()
{
    int l, b;
    cout << "Enter the lenghth of reactangle : ";
    cin >> l;
    cout << "Enter the Breath of reactangle : ";
    cin >> b;

    int a = l * b;

    int p = 2 * (l + b);

    cout << "area : " << a << endl;
    cout << "Perimeter is : " << p << endl;

    if (a > p)
    {
        cout << "Area is greater then Perimeter" << endl;
    }
    else if (a < p)
    {
        cout << "Area is Smaller then Perimeter" << endl;
    }
    else
    {
        cout << "Area is Equal to Perimeter" << endl;
    }
}