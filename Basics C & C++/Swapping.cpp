#include <iostream>
#include <stdio.h>
// Call by pointer
//  void swap(int *a, int *b)
//  {
//      int temp;
//      temp = *a;
//      *a = *b;
//      *b = temp;
//  }
//  int main()
//  {
//      int x = 10, y = 20;
//      swap(&x, &y);
//      printf("%d %d", x, y);
//  }

// Call by Reference
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    printf("%d %d", x, y);
}