#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5

typedef struct Stack
{
    int top;
    int array[MAX_SIZE];
} *stack;

void initStack(stack s)
{
    s->top = -1;
}

int isFull(stack s)
{
    return s->top == MAX_SIZE - 1;
}

int isEmpty(stack s)
{
    return s->top == -1;
}

void push(stack s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow\n");
        return;
    }
    s->array[++(s->top)] = value;
    printf("%d pushed to stack\n", value);
}

int pop(stack s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->array[(s->top)--];
}

int peek(stack s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
        return -1;
    }
    return s->array[s->top];
}

void display(stack s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty\n");
        return;
    }
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->array[i]);
    }
}

int main()
{
    stack s = (stack)malloc(sizeof(struct Stack));
    initStack(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);

    printf("%d popped from stack\n", pop(s));
    printf("Top element is %d\n", peek(s));

    display(s);

    free(s); // Remember to free the allocated memory
    return 0;
}
