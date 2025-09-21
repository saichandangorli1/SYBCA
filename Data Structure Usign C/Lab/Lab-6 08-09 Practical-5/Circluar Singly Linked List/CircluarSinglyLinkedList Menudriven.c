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

csnode addAtBeg(csnode head, int data)
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
    return new;
}

csnode addAtNth(csnode head, int data, int pos)
{
    csnode new = createNode(data);
    int count = 0;
    if (pos < 0)
    {
        printf("Invalid position\n");
        free(new);
        return head;
    }

    if (head == NULL || pos == 0)
    {
        return addAtBeg(head, data);
    }

    csnode temp = head;
    while (count < pos - 1 && temp->next != head)
    {
        temp = temp->next;
        count++;
    }
    if (count < pos - 1 || temp->next == head)
    {
        printf("Position out of bounds, adding at the end\n");
    }

    new->next = temp->next;
    temp->next = new;
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
    head = delAtLast(head);
    display(head);
    head = addAtBeg(head, 5);
    display(head);
    head = addAtNth(head, 15, 2);
    display(head);
    return 0;
}