#include <iostream>
using namespace std;

int main()
{
    struct Sample
    {
        int x;
        int y;
    };

    Sample a, b;
    a.x = 1;
    a.y = 2;

    a = b;

    cout << b.x;

    return 0;
}