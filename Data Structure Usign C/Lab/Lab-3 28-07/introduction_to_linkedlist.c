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
    node temp = (node)malloc(sizeof(struct List));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node addNode(node head, int data)
{
    node temp, temp2;

    temp = createNode(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp2 = head;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = temp;
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