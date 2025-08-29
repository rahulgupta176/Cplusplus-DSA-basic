#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string s = "Rahulg";
    int n = s.length();
    cout << s << endl;

    reverse(s.begin() + 2, s.begin() + 6);

    cout << s << endl;
}