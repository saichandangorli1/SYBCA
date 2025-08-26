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
    node temp = (node)malloc(sizeof(struct List));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

node addAtLast(node head, int data)
{
    node temp, temp2;
    temp = create(data);
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

node addAtBeg(node head, int data)
{
    node temp;
    temp = create(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

node addAtNth(node head, int data, int position)
{
    node temp, temp2;
    int count = 1;
    temp = create(data);
    if (position < 0)
    {
        printf("Invalid position");
        return head;
    }
    if (head == NULL)
    {
        head = temp;
    }
    else if (position == 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        temp2 = head;
        while (temp2 != NULL & count < position - 1)
        {
            temp2 = temp2->next;
            count++;
        }

        if (temp2 == NULL)
        {
            printf("Position out of bounds\n");
            return head;
        }

        temp->next = temp2->next;
        temp2->next = temp;
    }
    return head;
}

node deleteAtLast(node head)
{
    node temp;
    if (head == NULL)
    {
        printf("the list is empty");
        return head;
    }
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

node deleteAtBeg(node head)
{
    node temp;
    if (head == NULL)
    {
        printf("the list is empty");
        return head;
    }
    temp = head;
    head = head->next;
    free(temp);
    return head;
}

node deleteAtNth(node head, int position)
{
    node temp, prev;
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
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    temp = head;
    while (temp != NULL && count < position)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

void display(node head)
{
    node temp = head;
    if (head == NULL)
    {
        printf("the list is empty");
        return;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("Element : %d\n", temp->data);
        temp = temp->next;
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