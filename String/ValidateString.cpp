#include <iostream>
using namespace std;

int valid(char *c)
{
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (!(c[i] >= 65 && c[i] <= 90) && !(c[i] >= 97 && c[i] <= 122) && !(c[i] >= 48 && c[i] <= 57))
        {
            return 0;
        }
    }
    return -1;
};
int main()
{
    char *c = "Ab!cd";
    if (valid(c))
    {
        cout << "Valid String" << endl;
    }
    else
        cout << "Invalid String";
};