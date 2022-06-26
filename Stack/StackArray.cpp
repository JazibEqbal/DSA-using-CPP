#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *s;
};

void create(struct Stack *stack)
{
    cout << "Enter size " << endl;
    cin >> stack->size;
    stack->top = -1;
    stack->s = new int[stack->size];
};

void display(struct Stack *stack)
{
    int i;
    for (i = stack->top; i >= 0; i--)
    {
        cout << stack->s[i] << " ";
    }
    cout << endl;
};

void push(struct Stack *stack, int key)
{
    if (stack->top == stack->size - 1)
    {
        cout << "Stack Overflow" << endl;
    }
    else
    {
        stack->top++;
        stack->s[stack->top] = key;
    }
};

int pop(struct Stack *stack)
{
    int x = -1;
    if (stack->top == -1)
    {
        cout << "Stack Underflow" << endl;
    }
    else
    {
        x = stack->s[stack->top];
        stack->top--;
    }
    return x;
};

int peek(struct Stack *stack, int index)
{
    int x = -1;
    if (stack->top - index + 1 < 0)
    {
        cout << "Invalid Index" << endl;
    }
    else
    {
        x = stack->s[stack->top - index + 1];
    }
    return x;
};

int isEmpty(struct Stack *stack)
{
    if (stack->top == -1)
    {
        return 1;
    }
    else
        return 0;
};

int isFull(struct Stack *stack)
{
    if (stack->top == stack->size - 1)
    {
        return 1;
    }
    else
        return 0;
};

int stackTop(struct Stack *stack)
{
    if (!isEmpty(stack))
    {
        return stack->s[stack->top];
    }
    else
        return -1;
};

int main()
{
    struct Stack stack;
    create(&stack);
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    // cout<<isEmpty(&stack);
    // cout<<isFull(&stack);
    // cout<<stackTop(&stack);
    display(&stack);
    return 0;
}