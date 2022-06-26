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
int count(struct Node *p)
{
    int count = 0;
    do
    {
        p = p->next;
        count++;
    } while (p != head);
    return count;
};
void Insert(struct Node *p, int index, int key)
{
    if (index < 0 || index > count(head))
    {
        return;
    }
    struct Node *t;
    int i;
    t = new Node();
    t->data = key;
    if (index == 0)
    {
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
            {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    Insert(head, 2, 10);
    // cout << count(head) << endl;
    display(head);
    return 0;
}