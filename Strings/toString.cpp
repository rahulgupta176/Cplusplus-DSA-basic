#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x = 46689;
    string s = to_string(x);
    s = s + " ha ha ye string hai";
    cout << s << endl;
    cout << s.length() << endl;

    string p = "56836";
    int y = stoi(p);
    cout << y << endl;

    y = y + 5;
    cout << y << endl;
}