// this code this replaced with the previous code(which was refernce code from reference) for making code more simplify, if you are comfortable with that code kindly refer 'Queue Using linked list - Complex.c'
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int data;
    struct Queue *next;
};
typedef struct Queue *node;

node front = NULL, rear = NULL;

void enqueue(int data)
{
    node newNode = (node)malloc(sizeof(struct Queue));
    if (!newNode)
    {
        printf("Memory allocation error!\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("Enqueued: %d\n", data);
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    node temp = front;
    printf("Dequeued: %d\n", temp->data);
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    node temp = front;
    printf("Queue elements: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    enqueue(40);
    enqueue(50);
    display();
    return 0;
}
