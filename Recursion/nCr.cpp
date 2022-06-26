#include <iostream>
using namespace std;
// O(n)
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
};
int nCr(int n, int r)
{
    int num;
    int den;
    num = fact(n);
    den = fact(r) * fact(n - r);
    return num / den;
}
// RECURSIVE (Pascal's Triangle)
int ncr(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
    {
        return ncr(n - 1, r - 1) + ncr(n - 1, r);
    }
}
int main()
{
    cout << nCr(4, 2) << endl;
    cout << ncr(4, 2);
    return 0;
}