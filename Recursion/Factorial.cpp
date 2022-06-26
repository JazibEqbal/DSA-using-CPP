#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}
int main()
{
    cout << factorial(5);
    return 0;
}
//Iteration
// int factorial(int n)
// {
//     int f = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         f = f * i;
//     }
//     return f;
// }