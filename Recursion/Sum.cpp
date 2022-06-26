#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    cout << sum(5);
    return 0;
}
// Iteration
// int sum(int n)
// {
//     int s = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         s = s + i;
//     }
//     return s;
// }