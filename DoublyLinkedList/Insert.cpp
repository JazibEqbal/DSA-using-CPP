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
    cout<<endl;
};
void Insert(struct Node *p, int index, int key)
{
    struct Node *t;
    t = new Node();
    t->data = key;
    int i;

    if (index == 0)
    {
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        t->prev = p;
        p->next = t;
        if (p->next)
        {
            p->next->prev = t;
        }
    }
};
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Insert(first, 2, 15);
    display(first);
    return 0;
}