#include <stdio.h>
#include <stdlib.h>

// Time complexity
// Best: O(1)
// Worst: O(logn)
// Average: O(logn)
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
int binarysearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
            l = mid + 1;
    }
    return -1;
};
int Recursive(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return Recursive(a, l, mid - 1, key);
        }
        else
            return Recursive(a, mid + 1, h, key);
    }
    return -1;
};
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 8};
    printf("%d\n", binarysearch(arr, 7));
    printf("%d\n", Recursive(arr.A, 0, arr.length - 1, 6));
    return 0;
}
