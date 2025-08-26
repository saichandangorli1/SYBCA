// Assume a singly linked list containing integers write a function move () which would move a note forward by n position in linked list

#include <stdio.h>
#include <stdlib.h>

// Node definition
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *node;

// Create new node
node createNode(int data)
{
    node temp = (node)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Add node at end
node addNode(node head, int data)
{
    node temp = createNode(data);
    if (head == NULL)
        return temp;
    node curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = temp;
    return head;
}

// Print linked list
void printList(node head)
{
    printf("List: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Moves the node at position 'pos' forward by 'n' positions
void move(node *head, int pos, int n)
{
    if (*head == NULL || n <= 0 || pos < 0)
        return;

    node prev = NULL, curr = *head;
    int idx = 0;

    // Find node at position 'pos'
    while (curr != NULL && idx < pos)
    {
        prev = curr;
        curr = curr->next;
        idx++;
    }
    // If position is beyond list length
    if (curr == NULL)
        return;

    // Detach the node
    if (prev == NULL)
    {
        *head = curr->next;
    }
    else
    {
        prev->next = curr->next;
    }

    // Move forward n positions (insert after target)
    node insert_prev = NULL, insert_curr = *head;
    idx = 0;
    while (insert_curr != NULL && idx < pos + n - 1)
    {
        insert_prev = insert_curr;
        insert_curr = insert_curr->next;
        idx++;
    }

    // Insert the node
    if (insert_prev == NULL)
    {
        curr->next = *head;
        *head = curr;
    }
    else
    {
        curr->next = insert_prev->next;
        insert_prev->next = curr;
    }
}

// Example main
int main()
{
    node head = NULL;
    // Create a list: 10, 20, 30, 40, 50
    head = addNode(head, 10);
    head = addNode(head, 20);
    head = addNode(head, 30);
    head = addNode(head, 40);
    head = addNode(head, 50);

    printf("Original ");
    printList(head);

    // Move node at position 1 (20) forward by 2 positions
    move(&head, 1, 2);
    printf("After moving node at pos 1 by 2 positions: ");
    printList(head);

    // Move head (10) forward by 3 positions
    move(&head, 0, 3);
    printf("After moving node at pos 0 by 3 positions: ");
    printList(head);

    return 0;
}
