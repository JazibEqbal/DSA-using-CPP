// size of pointers is same regardless of datatype.
// REFERNCE is just another name of variable
// int a=25;
// int &r=a;
// both a & r have value of 25
#include <iostream>
#include <stdio.h>
struct Rectangle
{
    int l;
    int b;
};
int main()
{
    // int a = 10;
    //  int *p= &a;
    // int *p;
    // p = &a;
    // std::cout << a <<endl;
    // printf("Value using Pointer %d \n", *p);
    // printf("Address %d", p);
    // STACK
    // int arr[5] = {1, 2, 3, 4, 5};
    // int *p;
    // p = arr;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d \n", p[i]);
    // }
    // Allocating memory in HEAP
    // int *p;
    // p = new int[5];
    // p[0] = 2;
    // p[1] = 4;
    // p[2] = 4;
    // p[3] = 6;
    // p[4] = 8;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d \n", p[i]);
    // }
    // Dynamic Heap
    Rectangle *p;
    p = new Rectangle;
    p->l = 10;
    p->b = 5;
    printf("%d \n", p->l);
    printf("%d", p->b);
    // std::cout<<p->b;
    // std::cout<<p->l;
    // Deallocating memory of Heap
    delete[] p;
    return 0;
}
