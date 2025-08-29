#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        // if (i == 45 || i == 55)
        // {
        //     continue;
        // }

        // if (i == 50)
        // {
        //     continue;
        // }

        if (i % 2 == 0)
        {
            continue;
        }

        cout << i << "  ";
    }

    return 0;
}