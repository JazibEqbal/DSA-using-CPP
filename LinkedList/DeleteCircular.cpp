#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * head;

void create(int A[], int n)
{
    struct Node *t, *last;
    head = new Node();
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node();
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
};
void display(struct Node *p)
{
    do
    {
        cout << p->data << endl;
        p = p->next;
    } while (p != head);
};
int Delete(struct Node *p, int index)
{
    struct Node *q;
    q = new Node();
    int x;
    int i;
    p = head;
    if (index == 1)
    {
        while (p->next != head)
        {
            p = p->next;
        }
        x = head->data;
        if (head == p)
        {
            delete head;
            head = NULL;
        }
        else
        {
            p->next = head->next;
            delete head;
            head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
};

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    cout << "Deleted element is " << Delete(head, 3) << endl;
    display(head);
    return 0;
}