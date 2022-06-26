#include <iostream>
using namespace std;

int main()
{
    char a[] = "Painter";
    char b[] = "Painting";
    int i, j;
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++)
    {
        if (a[i] != b[j])
        {
            break;
        }
    }
    if (a[i] == b[j])
    {
        cout << "Both are equal";
    }
    else if (a[i] < b[j])
    {
        cout << "String A is smaller";
    }
    else
        cout << "String B is smaller";

    // Palindrome
    char a[] = "madam";
    char b[6];
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
    if (a[i] == b[j])
    {
        cout << "Palindrome" << endl;
    }
    else
        cout << "Not Palindrome";
};