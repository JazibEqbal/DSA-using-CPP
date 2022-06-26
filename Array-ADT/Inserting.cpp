#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length; i++)
        printf("%d\n", arr.A[i]);
};
void insert(struct Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
};
int main()
{
    struct Array arr = {{1, 2, 3, 4}, 20, 4};
    insert(&arr,0,6);
    display(arr);
    return 0;
}