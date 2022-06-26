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
int get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
};
void set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
    {
        arr->A[index] = x;
    }
};
int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
};
int min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
};
int sum(struct Array arr)
{
    int s = 0;
    for (int i = 0; i < arr.length; i++)
    {
        s = s + arr.A[i];
    }
    return s;
};
float avg(struct Array arr)
{
    return (float)sum(arr)/arr.length;
};
int main()
{
    struct Array arr = {{1, 2, 3, 4, 5, 6, 7}, 7};
    printf("%d\n", get(arr, 3));
    //set(&arr, 3, 1);
    printf("%d\n", max(arr));
    printf("%d\n", min(arr));
    printf("%d\n", sum(arr));
    printf("%f\n", avg(arr));
    //display(arr);
    return 0;
}