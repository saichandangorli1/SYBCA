// There are two linked list A and B containing the following data :
// A: 2, 5, 9, 14, 15, 17, 20, 17, 30
// B: 14,2, 9,13 ,37,8, 7,28
// Write a program to create
// 1. A linked list C that contain only those element that are common in linked list A and B
// 2. A linked list d. Which contains all elements of A as well as B ensuring that there is no repetition of element

#include <stdio.h>
#include <stdlib.h>

// Node Definition
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *node;

// Create a new node with given data
node createNode(int data)
{
    node temp = (node)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Add node at end (for initialization)
node addNode(node head, int data)
{
    node temp = createNode(data);
    if (head == NULL)
        return temp;
    node temp2 = head;
    while (temp2->next != NULL)
        temp2 = temp2->next;
    temp2->next = temp;
    return head;
}

// Check if value exists in a list
int exists(node head, int data)
{
    while (head != NULL)
    {
        if (head->data == data)
            return 1;
        head = head->next;
    }
    return 0;
}

// Create list C: common in A and B
node commonList(node A, node B)
{
    node C = NULL;
    while (A != NULL)
    {
        if (exists(B, A->data) && !exists(C, A->data))
        {
            C = addNode(C, A->data);
        }
        A = A->next;
    }
    return C;
}

// Create list D: all unique elements
node unionList(node A, node B)
{
    node D = NULL;
    // Add all elements from A
    while (A != NULL)
    {
        if (!exists(D, A->data))
            D = addNode(D, A->data);
        A = A->next;
    }
    // Add all elements from B
    while (B != NULL)
    {
        if (!exists(D, B->data))
            D = addNode(D, B->data);
        B = B->next;
    }
    return D;
}

// Print list
void printList(node head, char *msg)
{
    printf("%s: ", msg);
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    // Data for List A & B
    int A_data[] = {2, 5, 9, 14, 15, 17, 20, 17, 30};
    int B_data[] = {14, 2, 9, 13, 37, 8, 7, 28};
    int lenA = 9;
    int lenB = 8;
    // int lenA = sizeof(A_data) / sizeof(A_data);
    // int lenB = sizeof(B_data) / sizeof(B_data);
    node A = NULL, B = NULL;

    // Create lists A and B
    for (int i = 0; i < lenA; ++i)
        A = addNode(A, A_data[i]);
    for (int i = 0; i < lenB; ++i)
        B = addNode(B, B_data[i]);

    // Create list C (common)
    node C = commonList(A, B);

    // Create list D (unique union)
    node D = unionList(A, B);

    // Print results
    printList(A, "List A");
    printList(B, "List B");
    printList(C, "List C (Common Elements)");
    printList(D, "List D (Unique Union)");

    return 0;
}
