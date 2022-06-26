#include <iostream>
using namespace std;

int main()
{
    char c[] = "How are you";
    int vcount = 0;
    int con_count = 0;
    int word = 1;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
        {
            vcount++;
        }
        else if (c[i] >= 65 && c[i] <= 90 || c[i] >= 97 && c[i] <= 122)
        {
            con_count++;
        }
        else if (c[i] == ' ' && c[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << vcount << endl;
    cout << con_count << endl;
    cout << word << endl;
}