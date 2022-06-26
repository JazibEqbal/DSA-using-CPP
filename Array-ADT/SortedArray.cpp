#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int length;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
};
void insertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
};
int isSorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
        {
            return 0;
        }
    }
    return 1;
};
void negativePositiveSort(struct Array *arr)
{
    // O(n)
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
        {
            i++;
        }
        while (arr->A[i] > 0)
        {
            j--;
        }

        if (i < j)
        {
            int temp;
            temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
};
int main()
{
    struct Array arr = {{-11, 22, -33, 44, 55, 66, 77, 88}, 8};
    // insertSort(&arr, 54);
    // printf("%d\n", isSorted(arr));
    negativePositiveSort(&arr);
    display(arr);
    return 0;
}