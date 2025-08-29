#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "Enter the Cost Prices : ";
    cin >> cp;
    cout << "Enter the Selling Prices : ";
    cin >> sp;

    if (sp > cp)
    {
        cout << "You made a Profit of : " << sp - cp << endl;
    }
    else if (sp < cp)
    {
        cout << "You made a Loss of : " << cp - sp << endl;
    }
    else
    {
        cout << "You neither made profit nor loss" << endl;
    }
}