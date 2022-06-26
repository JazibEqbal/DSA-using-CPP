#include <iostream>
using namespace std;

struct Node
{
    struct Node *leftChild;
    int data;
    struct Node *rightChild;
} *root = NULL;

struct Queue
{
    int size;
    int front, rear;
    Node **Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    // q->Q = new Node **[Node];
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
};

void enqueue(struct Queue *q, Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
    {
        cout << "Queue is full" << endl;
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
    if (q->front == q->rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
};

int isEmpty(struct Queue q)
{
    return q.front == q.rear;
};

void createTree()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);
    cout << "Enter root value" << endl;
    cin >> x;
    root = new Node();
    root->data = x;
    root->leftChild = root->rightChild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        //address of q in p
        p = dequeue(&q);
        cout << "Enter left child of " << p->data << " " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->leftChild = t->rightChild = NULL;
            p->leftChild = t;
            enqueue(&q, t);
        }
        cout << "Enter right child of " << p->data << " " << endl;
        cin >> x;
        if (x != -1)
        {
            t = new Node();
            t->data = x;
            t->leftChild = t->rightChild = NULL;
            p->rightChild = t;
            enqueue(&q, t);
        }
    }
};

void preorder(struct Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        preorder(p->leftChild);
        preorder(p->rightChild);
    }
};
void inorder(struct Node *p)
{
    if (p)
    {
        inorder(p->leftChild);
        cout << p->data << " ";
        inorder(p->rightChild);
    }
};

void postorder(struct Node *p)
{
    if (p)
    {
        postorder(p->leftChild);
        postorder(p->rightChild);
        cout << p->data << " ";
    }
};

int main()
{
    struct Queue q;
    createTree();
    cout<<"Pre-order is: ";
    preorder(root);
    cout<<endl;
    cout<<"Post-order is: ";
    postorder(root);
    cout<<endl;
    cout<<"In-order is: ";
    inorder(root);
    cout<<endl;
}
