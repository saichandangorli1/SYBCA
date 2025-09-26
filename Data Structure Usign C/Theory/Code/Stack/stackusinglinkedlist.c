// #include <stdio.h>
// #include <stdlib.h>

// // Node structure and typedef for pointer-to-Node
// struct Node
// {
//     int data;
//     struct Node *next;
// };
// typedef struct Node *node;

// // Function to push an element onto the stack
// void push(node *top, int value)
// {
//     node newNode = (node)malloc(sizeof(struct Node));
//     if (newNode == NULL)
//     {
//         printf("Memory allocation failed\n");
//         return;
//     }
//     newNode->data = value;
//     newNode->next = *top;
//     *top = newNode;
//     printf("%d pushed to stack\n", value);
// }

// // Function to pop an element from the stack
// int pop(node *top)
// {
//     if (*top == NULL)
//     {
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     node temp = *top;
//     int popValue = temp->data;
//     *top = temp->next;
//     free(temp);
//     return popValue;
// }

// // Function to peek at the top element
// int peek(node top)
// {
//     if (top == NULL)
//     {
//         printf("Stack is Empty\n");
//         return -1;
//     }
//     return top->data;
// }

// // Function to display all elements in the stack
// void display(node top)
// {
//     if (top == NULL)
//     {
//         printf("Stack is Empty\n");
//         return;
//     }
//     printf("Stack elements:\n");
//     node temp = top;
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

// // Main function to demonstrate stack operations
// int main()
// {
//     node top = NULL;

//     push(&top, 10);
//     push(&top, 20);
//     push(&top, 30);

//     printf("%d popped from stack\n", pop(&top));
//     printf("Top element is %d\n", peek(top));

//     display(top);

//     // free remaining nodes (optional for demonstration)
//     while (top)
//         pop(&top);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

// push,pop,seek,displauy

struct Stack
{
    int data;
    struct Stack *next;
};

int count = 0;

typedef struct Stack *node;

void push(node *top, int data)
{
    node new = (node)malloc(sizeof(struct Stack));
    if (new == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    if (count == MAX)
    {
        printf("Stack Overflow\n");
        printf("%d is not pushed\n", data);
        return;
    }
    new->data = data;
    new->next = *top;
    *top = new;
    count++;
    printf("%d pushed to stack\n", data);
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
    count--;
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
    printf("Stack elements:\n");
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    node top = NULL;

    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    push(&top, 40);
    push(&top, 50);
    push(&top, 60); // This should show stack overflow

    display(top);
    return 0;
}