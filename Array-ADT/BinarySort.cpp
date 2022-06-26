#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int length;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
};
void display2(struct Array arr2)
{
    for (int i = 0; i < arr2.length; i++)
    {
        cout << arr2.A[i] << " ";
    }
    cout << endl;
};
void binarySort(struct Array arr)
{
    int i = 0;
    int j = arr.length - 1;
    while (i < j)
    {
        while (arr.A[i] == 0)
        {
            i++;
        }
        while (arr.A[j] == 1)
        {
            j--;
        };

        if (i < j)
        {
            int temp;
            temp = arr.A[i];
            arr.A[i] = arr.A[j];
            arr.A[j] = temp;
        }
    }
    display(arr);
};

void negativePositive(struct Array arr2)
{
    int i = 0;
    int j = arr2.length - 1;
    while (i < j)
    {
        while (arr2.A[i] < 0)
        {
            i++;
        }
        while (arr2.A[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            int temp;
            temp = arr2.A[i];
            arr2.A[i] = arr2.A[j];
            arr2.A[j] = temp;
        }
    }
    display(arr2);
};
int main()
{
    struct Array arr2 = {{-2, 3, 4, -5, 6, -1, 0, 7}, 8};
    struct Array arr = {{0, 1, 0, 0, 0, 1, 0, 1}, 8};
    // display(arr);
    binarySort(arr);
    negativePositive(arr2);
    return 0;
}
