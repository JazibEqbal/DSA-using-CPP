#include <iostream>
using namespace std;

int main()
{
    char a[] = "python";
    int i, j;
    for (j = 0; a[j] != '\0'; j++)
    {
    }
    j = j - 1;
    for (i = 0; i < j; i++, j--)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    cout << a;

    // Other Method
    char a[] = "python";
    char b[7];
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    cout << b;
};
