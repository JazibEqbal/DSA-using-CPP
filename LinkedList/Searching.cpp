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
struct Node *search(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p;
        }
        else
            p = p->next;
    }
    return NULL;
};
struct Node *moveToHead(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p != NULL)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
    return NULL;
};
struct Node *Recursive(struct Node *p, int key)
{
    if (p == NULL) // no node
    {
        return NULL;
    }
    else if (key == p->data)
    {
        return p;
    }
    else
        return Recursive(p->next, key);
};

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    // Linear Search
    struct Node *temp;
    temp = search(first, 6);
    if (temp)
    {
        cout << "key is found " << temp->data << endl;
    }
    else
        cout << "Key is not found" << endl;
    // RECURSIVE
    struct Node *temp;
    temp = Recursive(first, 5);
    if (temp)
    {
        cout << "key is found " << temp->data << endl;
    }
    else
        cout << "Key is not found" << endl;

    struct Node *temp;
    temp = moveToHead(first, 5);
    if (temp)
    {
        cout << "key is found " << temp->data << endl;
    }
    else
        cout << "Key is not found" << endl;

    display(first);
    return 0;
}