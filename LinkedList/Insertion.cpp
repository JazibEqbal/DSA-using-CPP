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
    first = new Node();
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
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
        cout << p->data << endl;
        p = p->next;
    }
};

void Insert(struct Node *p, int index, int key)
{
    struct Node *t;
    t = new Node();
    t->data = key;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
};
void insertAtLast(int key)
{
    struct Node *t, *last;
    t->data = key;
    t->next = NULL;
    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
};
void SortedInsert(struct Node *p, int key)
{
    struct Node *t, *q = NULL;
    t = new Node();
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p !=NULL && p->data < key)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
};

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    Insert(first, 2, 10);
    // insertAtLast(0);
    display(first);
    return 0;
}