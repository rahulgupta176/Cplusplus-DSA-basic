#include <iostream>
using namespace std;
void usa()
{
    cout << "Good Moring you are in usa " << endl;
    return;
}
void india()
{
    cout << "Good Moring and you are in india" << endl;
    return;
}

int main()
{
    cout << "Good Moring and you are in main function" << endl;
    india();
    usa();
    return 0;
}
