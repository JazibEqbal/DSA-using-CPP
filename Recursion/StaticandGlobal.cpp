#include <iostream>
using namespace std;

// int y=0;
int fun(int n)
{
    static int y = 0;
    if (n > 0)
    {
        y++;
        return fun(n - 1) + y;
    }
    return 0;
}
int main()
{
    int x = 5;
    cout << fun(x);
}
// Just make a single copy of static and global variables