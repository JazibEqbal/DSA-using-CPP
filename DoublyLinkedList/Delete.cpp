#include <iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;
    first = new Node();
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
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
};
int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i, x;
    if (index == 1)
    {
        p = first;
        first = first->next;
        if (first)
        {
            first->prev = NULL;
        }
        x = p->data;
        delete p;
    }
    else
    {
        p = first;
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
        {
            p->next->prev = p->prev;
        }
        x = p->data;
        delete p;
    }
    return x;
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    cout << "Deleted element is " << Delete(first, 3) << endl;
    display(first);
    return 0;
}