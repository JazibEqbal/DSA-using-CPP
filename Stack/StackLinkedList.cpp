#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t;
    t = new Node();

    if (t == NULL)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
};

int pop()
{
    struct Node *t;
    t = new Node();
    int x = -1;
    if (top == NULL)
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
};

int peek(int index)
{
    struct Node *t = top;
    for (int i = 0; t != NULL && i < index - 1; i++)
    {
        t = t->next;
    }
    if (t != NULL)
    {
        return t->data;
    }
    else
    {
        return -1;
    }
};

void display()
{
    struct Node *p;
    p = top;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
};

int main()
{
    push(10);
    push(20);
    push(30);

    display();
    cout << pop() << endl;
    cout<< peek(2)<<endl;
    return 0;
}