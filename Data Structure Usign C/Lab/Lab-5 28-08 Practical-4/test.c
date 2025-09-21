#include <stdio.h>
#include <stdlib.h>

struct Dlist
{
    int data;
    struct Dlist *next;
    struct Dlist *prev;
};

typedef struct Dlist *dnode;

dnode create(int data)
{
    dnode temp = (dnode)malloc(sizeof(struct Dlist));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
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
        dnode temp2 = head;
        while (temp2->next != NULL)
        {

            temp2 = temp2->next;
        }
        temp2->next = temp;
        temp->prev = temp2;
    }
    return head;
}

dnode addAtBeg(dnode head, int data)
{
    dnode temp = create(data);
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    return head;
}

dnode addAtNth(dnode head, int data, int position)
{
    if (position < 0)
    {
        printf("invalid position\n");
        return head;
    }
    if (position == 0 || head == NULL)
    {
        return addAtBeg(head, data);
    }
    dnode temp = create(data);
    dnode temp2 = head;
    int count = 0;
    while (temp2 != NULL && count < position - 1)
    {
        temp2 = temp2->next;
        count++;
    }

    if (temp2 == NULL)
    {
        printf("position out of bounds\n");
        free(temp);
    }
    else
    {
        temp->next = temp2->next;
        temp->prev = temp2;
        if (temp2->next != NULL)
            temp2->next->prev = temp;
        temp2->next = temp;
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
    else if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    else
    {
        dnode temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
        return head;
    }
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
    if (head->next == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }

    dnode temp = head;
    int count = 0;
    while (temp != NULL && count < position)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("Position out of bounds\n");
        return head;
    }
    dnode current = temp;
    if (current->prev != NULL)
        current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);
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