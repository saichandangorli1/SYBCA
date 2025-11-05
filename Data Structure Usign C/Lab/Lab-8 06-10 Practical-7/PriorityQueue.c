// priority queue using linked list implementation
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    int priority;
    struct Node* next;
};
typedef struct Node* node;
node front = NULL;
node rear = NULL;
void enqueue(int data, int priority) {
    node newNode = (node)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error!\n");
        return;
    }
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;

    if (front == NULL || priority < front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        node temp = front;
        while (temp->next != NULL && temp->next->priority <= priority) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    printf("Enqueued: %d with priority %d\n", data, priority);
}

void dequeue() {
    if (front == NULL) {
        printf("Priority Queue is empty!\n");
        return;
    }
    node temp = front;
    printf("Dequeued: %d with priority %d\n", temp->data, temp->priority);
    front = front->next;
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Priority Queue is empty!\n");
        return;
    }
    node temp = front;
    printf("Priority Queue elements:\n");
    while (temp != NULL) {
        printf("Data: %d, Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main() {
    int choice, data, priority;
    while (1) {
        printf("\nPriority Queue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter data and priority: ");
                scanf("%d %d", &data, &priority);
                enqueue(data, priority);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}