#include <stdio.h>
#include <stdlib.h>

struct CSnode
{
    int data;
    struct CSnode *next;
};

typedef struct CSnode *csnode;

csnode createNode(int data)
{
    csnode newNode = (csnode)malloc(sizeof(struct CSnode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

csnode addAtLast(csnode head, int data)
{
    csnode new = createNode(data);
    if (head == NULL)
    {
        new->next = new;
        return new;
    }

    csnode temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->next = head;
    return head;
}

csnode delAtLast(csnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == head)
    {
        free(head);
        return NULL;
    }
    csnode temp = head;
    while (temp->next->next != head)
    {
        temp = temp->next;
    }
    csnode toDelete = temp->next;
    temp->next = head;
    free(toDelete);
    return head;
}

void display(csnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    csnode temp = head;
    while (temp->next != head)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d -> HEAD(%d)\n", temp->data, head->data);
}

int main()
{
    csnode head = NULL;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtLast(head, 30);
    display(head);
    // head = delAtLast(head);
    // display(head);
    return 0;
}