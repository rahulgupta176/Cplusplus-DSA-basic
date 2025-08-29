#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "Rahul Gupta";

    cout << s << endl;
    s[0] = 'u';
    s[2] = '9';

    cout << s << endl;
    cout << s.length() << endl;
    cout << s.size() << endl;

    string r = "RAhul";
    cout << r.length() << endl;
    cout << r.size() << endl;

    char ch = '\0';
    int x = 0;
    cout << ch << endl;
    cout << (int)ch << endl;
    cout << x << endl;
    cout << (char)x << endl;
}