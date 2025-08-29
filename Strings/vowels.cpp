#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "Rahul gupta Is Are are buty i domnt knoe yo yo honey singh";

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
        {
            count++;
        }
    }

    cout << count << endl;
}