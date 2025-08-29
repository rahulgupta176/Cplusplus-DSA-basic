#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Please Enter The Number : ";

    cin >> x;
    float y = (float)x;

    cout << "The answer is : " << y / 2 << endl;

    int i = 2 * 3 / 4; // bodmas to follow hoga hi but computer ma oder left to right jata hai
    cout << i;
}