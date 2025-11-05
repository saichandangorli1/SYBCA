
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct Queue
{
    int arr[SIZE];
    int front;
    int rear;
};

typedef struct Queue *node;

void init(node q)
{
    q->front = -1;
    q->rear = -1;
}

int isFull(node q)
{
    return q->rear == SIZE - 1;
}

int isEmpty(node q)
{
    return q->front == -1 || q->front > q->rear;
}

node enqueue(node q, int data)
{
    if (isFull(q))
    {
        printf("Queue is full!\n");
        return q;
    }
    if (isEmpty(q))
    {
        q->front = 0;
    }
    q->arr[++q->rear] = data;
    printf("Enqueued: %d\n", data);
    return q;
}

node dequeue(node q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!\n");
        return q;
    }
    printf("Dequeued: %d\n", q->arr[q->front]);
    q->front++;
    if (q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    return q;
}

void display(node q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
    printf("\n");
}

int main()
{
    node q = (node)malloc(sizeof(struct Queue));
    init(q);
    q = enqueue(q, 10);
    q = enqueue(q, 20);
    q = enqueue(q, 30);
    display(q);
    q = dequeue(q);
    display(q);
    q = enqueue(q, 40);
    q = enqueue(q, 50);
    display(q);
    return 0;
}