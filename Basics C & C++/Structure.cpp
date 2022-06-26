#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
    int l;
    int b;
};
int main()
{
    // variable declaration
    struct Rectangle r1;
    r1.l = 4;
    r1.b = 2;
    // cout<<r1.l<<endl;
    // cout<<r1.b<<endl;
    printf("Area is: %d", r1.l*r1.b);
    // printf("%d", sizeof(r1));
    return 0;
}