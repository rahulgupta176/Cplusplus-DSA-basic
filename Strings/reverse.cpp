#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s = "RAhul gupt a is very bad boy";
    cout << s << endl;

    reverse(s.begin(), s.end());

    cout << s << endl;
}