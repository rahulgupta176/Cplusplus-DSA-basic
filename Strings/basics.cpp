#include <iostream>
#include <string>
using namespace std;

int main()
{

    // char ch[] = {'r', 'a', 'h', 'u', 'l'};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ch[i];
    // }

    string ch = "RAhul gupta is my name and i am a very bad and toxic boy";

    cout << ch << endl;

    string x;
    cout << "Enter the string here : ";
    // cin >> x;
    getline(cin, x);
    cout << x << endl;
}