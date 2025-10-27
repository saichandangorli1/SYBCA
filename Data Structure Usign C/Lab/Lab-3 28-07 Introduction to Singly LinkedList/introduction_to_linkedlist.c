// create and add linked list  and printing

#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *node;

node createNode(int data)
{
    node new = (node)malloc(sizeof(struct List));
    new->data = data;
    new->next = NULL;
    return new;
}

node addNode(node head, int data)
{
    node new, temp;

    new = createNode(data);
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
    return head;
}

void PrintNode(node head)
{
    while (head != NULL)
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    }
}

int main()
{
    node head = (node)malloc(sizeof(struct List));
    head->data = 7;
    head->next = NULL;
    // PrintNode(head);
    head = addNode(head, 56);
    head = addNode(head, 53);
    head = addNode(head, 562);
    PrintNode(head);
    return 0;
}