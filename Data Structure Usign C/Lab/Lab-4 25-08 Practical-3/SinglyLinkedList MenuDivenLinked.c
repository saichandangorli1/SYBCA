#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List *next;
};

typedef struct List *node;

node create(int data)
{
    node new = (node)malloc(sizeof(struct List));
    new->data = data;
    new->next = NULL;
    return new;
}

node addAtLast(node head, int data)
{
    node new, temp;
    new = create(data);
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

node addAtBeg(node head, int data)
{
    node new;
    new = create(data);
    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
    return head;
}

node addAtNth(node head, int data, int position)
{
    node new, temp;
    int count = 1;
    new = create(data);
    if (position < 0)
    {
        printf("Invalid position");
        return head;
    }
    if (head == NULL)
    {
        head = new;
    }
    else if (position == 0)
    {
        new->next = head;
        head = new;
    }
    else
    {
        temp = head;
        while (temp != NULL & count < position - 1)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            printf("Position out of bounds\n");
            return head;
        }

        new->next = temp->next;
        temp->next = new;
    }
    return head;
}

node deleteAtLast(node head)
{
    node new;
    if (head == NULL)
    {
        printf("the list is empty");
        return head;
    }
    new = head;
    while (new->next->next != NULL)
    {
        new = new->next;
    }
    free(new->next);
    new->next = NULL;
    return head;
}

node deleteAtBeg(node head)
{
    node new;
    if (head == NULL)
    {
        printf("the list is empty");
        return head;
    }
    new = head;
    head = head->next;
    free(new);
    return head;
}

node deleteAtNth(node head, int position)
{
    node new, prev;
    int count = 1;
    if (head == NULL)
    {
        printf("the list is empty");
        return head;
    }
    if (position < 0)
    {
        printf("Invalid position");
        return head;
    }
    if (position == 0)
    {
        new = head;
        head = head->next;
        free(new);
        return head;
    }
    new = head;
    while (new != NULL && count < position)
    {
        prev = new;
        new = new->next;
        count++;
    }

    if (new == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }
    prev->next = new->next;
    free(new);
    return head;
}

void display(node head)
{
    node new = head;
    if (head == NULL)
    {
        printf("the list is empty");
        return;
    }

    new = head;
    while (new != NULL)
    {
        printf("Element : %d\n", new->data);
        new = new->next;
    }
}

int main()
{
    node head = NULL;
    int choice, data;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtLast(head, 30);
    // display(head);
    while (1)
    {
        printf("1. Add at last\n");
        printf("2. Add at beginning\n");
        printf("3. Add at nth position\n");
        printf("4. Delete at last\n");
        printf("5. Delete at beginning\n");
        printf("6. Delete at nth position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            head = addAtLast(head, data);
            break;
        case 2:
            printf("Enter data: ");
            scanf("%d", &data);
            head = addAtBeg(head, data);
            break;
        case 3:
        {
            int position;
            printf("Enter data: ");
            scanf("%d", &data);
            printf("Enter position: ");
            scanf("%d", &position);
            head = addAtNth(head, data, position);
            break;
        }
        case 4:
            head = deleteAtLast(head);
            break;
        case 5:
            head = deleteAtBeg(head);
            break;
        case 6:
        {
            int position;
            printf("Enter position: ");
            scanf("%d", &position);
            head = deleteAtNth(head, position);
            break;
        }
        case 7:
            display(head);
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}