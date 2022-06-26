#include <stdio.h>
#include <stdlib.h>

// Best Case: O(1)
// Worst Case: O(n)
// Average Case: O(n)
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
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};
int linearsearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            // Transpositional search -: shifting element one position before.
            swap(&arr->A[i], &arr->A[i - 1]);
            // Move to head for performing search of same element agian in O(1) time.
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
};
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 8};
    printf("%d\n", linearsearch(&arr, 4));
    return 0;
}