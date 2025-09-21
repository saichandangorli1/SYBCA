#include <stdio.h>
#include <stdlib.h>

struct DList
{
    int data;
    struct DList *prev;
    struct DList *next;
};

typedef struct DList *dnode;

dnode create(int data)
{
    dnode temp = (dnode)malloc(sizeof(struct DList));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

dnode addAtLast(dnode head, int data)
{
    dnode temp = create(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        dnode curr = head;
        while (curr->next != NULL)
            curr = curr->next;
        curr->next = temp;
        temp->prev = curr;
    }
    return head;
}

dnode addAtBeg(dnode head, int data)
{
    dnode temp = create(data);
    if (head != NULL)
    {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
    return head;
}

dnode addAtNth(dnode head, int data, int position)
{
    if (position < 0)
    {
        printf("Invalid position\n");
        return head;
    }
    if (position == 0 || head == NULL)
    {
        return addAtBeg(head, data);
    }
    dnode temp = create(data);
    dnode curr = head;
    int count = 0;
    while (curr != NULL && count < position - 1)
    {
        curr = curr->next;
        count++;
    }
    if (curr == NULL)
    {
        printf("Position out of bounds\n");
        free(temp);
    }
    else
    {
        temp->next = curr->next;
        temp->prev = curr;
        if (curr->next != NULL)
            curr->next->prev = temp;
        curr->next = temp;
    }
    return head;
}

dnode deleteAtLast(dnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    dnode curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    if (curr->prev != NULL)
        curr->prev->next = NULL;
    else
        head = NULL;
    free(curr);
    return head;
}

dnode deleteAtBeg(dnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    dnode temp = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    free(temp);
    return head;
}

dnode deleteAtNth(dnode head, int position)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }
    if (position < 0)
    {
        printf("Invalid position\n");
        return head;
    }
    if (position == 0)
    {
        return deleteAtBeg(head);
    }
    dnode curr = head;
    int count = 0;
    while (curr != NULL && count < position)
    {
        curr = curr->next;
        count++;
    }
    if (curr == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }
    if (curr->prev != NULL)
        curr->prev->next = curr->next;
    if (curr->next != NULL)
        curr->next->prev = curr->prev;
    free(curr);
    return head;
}

void display(dnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    dnode curr = head;
    while (curr != NULL)
    {
        printf("Element: %d\n", curr->data);
        curr = curr->next;
    }
}

void displayReverse(dnode head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    dnode curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    while (curr != NULL)
    {
        printf("Element: %d\n", curr->data);
        curr = curr->prev;
    }
}
int main()
{
    dnode head = NULL;
    int choice, data;
    head = addAtLast(head, 10);
    head = addAtLast(head, 20);
    head = addAtLast(head, 30);

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
