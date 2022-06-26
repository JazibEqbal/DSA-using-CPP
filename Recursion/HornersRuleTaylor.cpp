#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + x * s/n;
        return e(x, n - 1);
    }
}
int main()
{
    cout << e(1, 10);
    return 0;
}
// int e(int x, int n)
// {
//     int s = 1;
//     for (; n > 0; n--)
//     {
//         s = 1 + x / n * s;
//     }
//     return s;
// }
