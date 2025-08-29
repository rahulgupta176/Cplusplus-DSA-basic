#include <iostream>
using namespace std;
int main()
{
    int x = 3, y, z;

    y = x = 10; // right to left quki 2 equal hai

    z = x < 10; // left to right hota quki = ke bad normal jiasa hai but < or> ki akut zada hota hai

    cout << x << " " << y << " " << z;

    return 0;
}