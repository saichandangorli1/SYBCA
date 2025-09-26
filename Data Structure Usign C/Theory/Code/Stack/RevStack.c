#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct Stack
{
    int data;
    struct Stack *next;
};

typedef struct Stack *node;

node push(node *top, int data)
{
    node new = (node)malloc(sizeof(struct Stack));
    if (new == NULL)
    {
        printf("Memory allocation failed\n");
        return *top;
    }
    new->data = data;
    new->next = *top;
    *top = new;
    return *top;
}

int pop(node *top)
{
    if (*top == NULL)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    node temp = *top;
    int poppedData = temp->data;
    *top = temp->next;
    free(temp);
    return poppedData;
}
int peek(node top)
{
    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return top->data;
}

void display(node top)
{
    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    node temp = top;
    printf("Stack elements: ");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

node rev(node *top)
{
    node prev = NULL;
    node next = NULL;
    node curr = *top;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

node revNew(node *top)
{
    node prev = NULL;
    node curr = *top;
    while (curr != NULL)
    {
        prev = push(&prev, curr->data);
        curr = curr->next;
    }
    return prev;
}
int main()
{
    node top = NULL;
    node reve = NULL;
    top = push(&top, 10);
    top = push(&top, 20);
    top = push(&top, 30);
    display(top);
    top = rev(&top);
    display(top);
    reve = revNew(&top);
    display(top);
    display(reve);
    return 0;
}