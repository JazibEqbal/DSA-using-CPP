#include <iostream>
#include <stdio.h>

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    int x = 90, y = 10, sum;
    // calling add function
    sum = add(x, y);
    printf("Sum is: %d", sum);
}