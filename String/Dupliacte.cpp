#include <iostream>
using namespace std;

int main()
{
    char a[] = "finding";
    int H[26]={0};
    int i;
    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << i + 97 << endl;
             cout << H[i]<<endl;
        }
    }
}