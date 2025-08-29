#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "RAhul";
    cout << s << endl;
    cout << s << "  " << s.length() << endl;

    s = s + " Gupta";

    cout << s << "  " << s.length() << endl;

    s = "Yo Yo  " + s;
    cout << s << "  " << s.length() << endl;
}