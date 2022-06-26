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
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
};
void deleting(struct Array *arr, int index)
{
    int x =0;
    x= arr->A[index];
    for (int i = index; i < arr->length - 1; i++)
    {
        arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
};
int main()
{
    struct Array arr = {{1, 2, 3, 4}, 20, 4};
    deleting(&arr,3);
    display(arr);
    return 0;
}