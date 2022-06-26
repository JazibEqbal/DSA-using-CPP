#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
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

char pop()
{
    struct Node *t;
    t = new Node();
    char x = -1;
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

void display()
{
    struct Node *p;
    p = top;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
};

int pre(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
        return 0;
};

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    else
        return 1;
};

int main()
{
    char *infix = "a+b*c";
    char *postfix;
    cout << pop() << endl;
    return 0;
}