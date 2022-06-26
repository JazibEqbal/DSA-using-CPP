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
struct Array *Intersection(struct Array *arr1, struct Array *arr2)
{
    int i, j, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            j++;
        }
        else
            arr3->A[k++] = arr2->A[j++];
        i++;
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
};
//UNION
struct Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i, j, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            arr3->A[k++] = arr1->A[j++];
        }
        else
            arr3->A[k++] = arr1->A[j++];
        i++;
    }
    for (; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->length; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;
    return arr3;
};
int main()
{

    struct Array arr1 = {{2, 6, 10, 15, 25}, 20, 5};
    struct Array arr2 = {{3, 15, 7, 6, 20}, 20, 5};
    struct Array *arr3;
    arr3 = Intersection(&arr1, &arr2);
    display(*arr3);
    return 0;
};
