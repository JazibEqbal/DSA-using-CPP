#include <iostream>
using namespace std;
int fib(int n)
{
    //Time Complexity- O(n^2)
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}
// EXcessive Recursion
// Using Memoization
int f[10];
int fi(int n)
// O(n+1)
{
    if (n <= 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] == fi(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = fi(n - 1);
        }
        return f[n - 2] + f[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        f[i] = -1;
    }
    cout << fi(7) << endl;
    cout << fib(7) << endl;
    return 0;
}
// Iterative
//  int fib(int n)
//  {
//      int t0 = 0, t1 = 1, s;
//      for (int i = 2; i <= n; i++)
//      {
//          s = t0 + t1;
//          t0 = t1;
//          t1 = s;
//      }
//      return s;
//  }