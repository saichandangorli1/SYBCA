
// reverse the stack using linkedlist

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node *node;

node push(node *top, int data)
{
    node new = (node)malloc(sizeof(struct Node));
    new->data = data;
    new->next = *top;
    *top = new;
    printf("%d pushed to stack\n", data);
    return *top;
}

int pop(node *top)
{
    if (*top == NULL)
    {
        printf("Stack underflow\n");
        return -1;
    }
    node temp = *top;
    int dp = temp->data;
    *top = temp->next;
    free(temp);
    return dp;
}

int peek(node top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}
node rev(node top)
{
    node prev = NULL;
    node next = NULL;
    node curr = top;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void display(node top)
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }
    node temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    node top = NULL;
    top = push(&top, 10);
    top = push(&top, 20);
    top = push(&top, 30);
    display(top);
    printf("%d popped from stack\n", pop(&top));
    display(top);
    printf("Top element is %d\n", peek(top));
    top = rev(top);
    printf("Reversed stack is \n");
    display(top);
    return 0;
}
