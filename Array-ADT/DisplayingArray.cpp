#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    int i;
    printf("Elements are \n");
    for (int i = 0; i < arr.length; i++)
        printf("%d \t", arr.A[i]);
}
int main()
{
    struct Array arr;
    printf("Enter size of an array ");
    scanf("%d", &arr.size);
    // arr.A = (int *)malloc( sizeof(int));
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    int n;
    printf("Enter numbers ");
    scanf("%d", &n);
    printf("Enter all elements \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr.A[i]);
    arr.length = n;
    display(arr);
    return 0;
}

// int A[20];
//  int size;
//  int length;
// struct Array arr= {{1,2,3,4,5},size(20),length}(5);