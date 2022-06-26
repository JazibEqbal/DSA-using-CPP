#include <iostream>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;

struct Queue
{
    int size;
    int front, rear;
    Node **Q;
};

struct Stack
{
    int size;
    int top;
    struct Node **stack;
};

void createStack(struct Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->stack = (struct Node **)malloc(st->size * sizeof(Node *));
};

void createQueue(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
};
void enqueue(struct Queue *q, Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full " << endl;
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
};

Node *dequeue(struct Queue *q)
{
    Node *x = NULL;
    if (q->rear == q->front)
    {
        cout << "Queue is empty " << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
};

int isEmptyQueue(struct Queue q)
{
    return q.front == q.rear;
};

void push(struct Stack *st, struct Node *x)
{
    if (st->top == st->size - 1)
    {
        cout << "Stack is full " << endl;
    }
    else
    {
        st->top++;
        st->stack[st->top] = x;
    }
};
Node *pop(struct Stack *st)
{
    struct Node *x = NULL;
    if (st->top == -1)
    {
        cout << "Stack is empty " << endl;
    }
    else
    {
        x = st->stack[st->top];
        st->top--;
    }
    return x;
};
int isEmptyStack(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
};
int isFullStack(struct Stack st)
{
    return st.top == st.size - 1;
};

void createTree()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    createQueue(&q, 100);
    cout << "Enter root value" << endl;
    cin >> x;
    root = new Node();
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmptyQueue(q))
    {
        p = dequeue(&q);
        cout << "Enter left child of " << p->data << " " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        cout << "Enter right child of " << p->data << " " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
};

void iterativePreorder(struct Node *p)
{
    struct Stack stk;
    createStack(&stk, 100);
    while (p != NULL || !isEmptyStack(stk))
    {
        if (p)
        {
            cout << p->data << " ";
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            p = p->rchild;
        }
    }
};

void iterativeInorder(struct Node *p)
{
    struct Stack stk;
    createStack(&stk, 100);
    while (p != NULL || !isEmptyStack(stk))
    {
        if (p)
        {
            push(&stk, p);
            p = p->lchild;
        }
        else
        {
            p = pop(&stk);
            cout << p->data << " ";
            p = p->rchild;
        }
    }
};

int main()
{
    createTree();
    cout << "Pre Order is: ";
    iterativePreorder(root);
    cout << endl;
    return 0;
}