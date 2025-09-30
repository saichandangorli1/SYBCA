#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Queue structure to hold front and rear pointers
typedef struct Queue
{
    Node *front;
    Node *rear;
} Queue;

// Function to create and initialize a new queue
Queue *createQueue()
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

// Enqueue operation: insert element at rear
void enqueue(Queue *q, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (!newNode)
    {
        printf("Memory allocation error!\n");
        return;
    }
    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL)
    {
        // Queue is empty, new node is front and rear
        q->front = q->rear = newNode;
    }
    else
    {
        // Attach new node at rear and update rear pointer
        q->rear->next = newNode;
        q->rear = newNode;
    }
    printf("Enqueued: %d\n", data);
}

// Dequeue operation: remove element from front
void dequeue(Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }

    Node *temp = q->front;
    printf("Dequeued: %d\n", temp->data);

    q->front = q->front->next;

    // If front becomes NULL, queue is empty, update rear
    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
}

// Display all elements in the queue
void display(Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    Node *temp = q->front;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main function to demonstrate queue operations
int main()
{
    Queue *q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    display(q);

    dequeue(q);
    display(q);

    enqueue(q, 40);
    enqueue(q, 50);
    display(q);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q); // Queue will be empty here
    display(q);

    // Free the queue structure itself
    free(q);

    return 0;
}
