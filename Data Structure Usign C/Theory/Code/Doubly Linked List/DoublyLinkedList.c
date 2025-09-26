#include <stdio.h>
#include <stdlib.h>

struct Dnode
{
    int data;
    struct Dnode *prev;
    struct Dnode *next;
};

typedef struct Dnode *dnode;

dnode create(int data)
{
    dnode new = (dnode)malloc(sizeof(struct Dnode));
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    return new;
}

dnode addAtLast(dnode head, int data)
{
    dnode new, temp;
    new = create(data);
    if (head == NULL)
    {
        head = new;
        return head;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->prev = temp;
    return head;
}

dnode addAtBeg(dnode head, int data)
{
    dnode new;
    new = create(data);
    if (head == NULL)
    {
        head = new;
        return head;
    }
    new->next = head;
    head->prev = new;
    head = new;
    return head;
}

dnode addAtNth(dnode head, int data, int pos)
{
    dnode new, temp;
    int count = 0;
    if (pos < 0)
    {
        printf("invalid position\n");
        return head;
    }
    if (pos == 0)
    {
        return addAtBeg(head, data);
    }
    new = create(data);
    temp = head;
    while ((temp != NULL && count < pos - 1))
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("Position out of bounds\n");
        free(new);
        return head;
    }
    new->next = temp->next;
    new->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = new;
    }
    temp->next = new;
    return head;
}

dnode delAtBeg(dnode head)
{
    dnode temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    temp = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    free(temp);
    return head;
}

dnode delAtLast(dnode head)
{
    dnode temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = NULL;
    }
    else
    {
        head = NULL;
    }
    free(temp);
    return head;
}

dnode delAtNth(dnode head, int pos)
{
    dnode temp;
    int count = 0;
    if (head = NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if (pos < 0)
    {
        printf("invalid position\n");
        return head;
    }
    if (pos == 0)
    {
        return delAtBeg(head);
    }
    temp = head;
    while (temp != NULL && count < pos)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }
    if (temp->prev != NULL)
    {
        temp->prev->next = temp->next;
    }
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    free(temp);
    return head;
}

void display(dnode head)
{
    dnode temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void displayRev(dnode head)
{
    dnode temp;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{
    dnode head = NULL;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtLast(head, 30);
    display(head);
    head = addAtBeg(head, 5);
    display(head);
    head = addAtNth(head, 15, 2);
    display(head);
    head = delAtBeg(head);
    display(head);
    head = delAtLast(head);
    display(head);
    head = delAtNth(head, 1);
    display(head);
    displayRev(head);
    return 0;
}
