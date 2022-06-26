#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
};
void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
int MiddleElement(struct Node *p)
{
    struct Node *q;
    q = new Node();
    p = q = first;
    while (q != NULL)
    {
        q = q->next;
        if (q)
            q = q->next;
        if (q)
            p = p->next;
    }
    int x = p->data;
    return x;
}
int main()
{
    int A[] = {1, 2, 31, 4, 5, 6,87};
    create(A, 7);
    cout << "Middle element is " << MiddleElement(first) << endl;
    display(first);
    return 0;
}