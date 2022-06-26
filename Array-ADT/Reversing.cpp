#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int length;
};
//O(n)
void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
};
void reverse(struct Array *arr)
{
    int *B;
    B = (int *)malloc(arr->length * sizeof(int));
    int i, j;
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr->A[i];
    }
    for (i = 0; i < arr->length; i++)
    {
        arr->A[i] = B[i];
    }
};
void reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        int temp;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
};
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7}, 7};
    reverse2(&arr);
    // reverse(&arr);
    display(arr);
    return 0;
}