// #include <stdio.h>
// #define SIZE 5

// int queue[SIZE];
// int front = -1;
// int rear = -1;

// int isEmpty() {
//     return front == -1;
// }

// int isFull() {
//     return rear == SIZE - 1;
// }

// void enqueue(int data) {
//     if (isFull()) {
//         printf("Queue is full!\n");
//         return;
//     }
//     if (isEmpty()) {
//         front = 0;
//     }
//     rear++;
//     queue[rear] = data;
//     printf("Enqueued: %d\n", data);
// }

// void dequeue() {
//     if (isEmpty()) {
//         printf("Queue is empty!\n");
//         return;
//     }
//     printf("Dequeued: %d\n", queue[front]);
//     if (front == rear) {
//         // Queue becomes empty after dequeue
//         front = -1;
//         rear = -1;
//     } else {
//         front++;
//     }
// }

// void display() {
//     if (isEmpty()) {
//         printf("Queue is empty!\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (int i = front; i <= rear; i++) {
//         printf("%d ", queue[i]);
//     }
//     printf("\n");
// }

// int main() {
//     enqueue(10);
//     enqueue(20);
//     enqueue(30);
//     display();

//     dequeue();
//     display();

//     enqueue(40);
//     enqueue(50);
//     enqueue(60);  // This should show "Queue is full!"
//     display();

//     return 0;
// }

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