#include <stdio.h>
#include <stdlib.h>
struct Ticket
{
    int ticketNumber;
    struct Ticket *next;
};
typedef struct Ticket *node;

node front = NULL, rear = NULL;
int ticketCounter = 1;
void issueTicket()
{
    node newTicket = (node)malloc(sizeof(struct Ticket));
    if (!newTicket)
    {
        printf("Memory allocation error!\n");
        return;
    }
    newTicket->ticketNumber = ticketCounter++;
    newTicket->next = NULL;
    if (rear == NULL)
    {
        front = rear = newTicket;
    }
    else
    {
        rear->next = newTicket;
        rear = newTicket;
    }
    printf("Issued Ticket Number: %d\n", newTicket->ticketNumber);
}

void serveTicket()
{
    if (front == NULL)
    {
        printf("No tickets to serve!\n");
        return;
    }
    node temp = front;
    printf("Served Ticket Number: %d\n", temp->ticketNumber);
    front = front->next;
    if (front == NULL)
        rear = NULL;
    free(temp);
}

void displayTickets()
{
    if (front == NULL)
    {
        printf("No tickets in the queue!\n");
        return;
    }
    node temp = front;
    printf("Tickets in the queue: ");
    while (temp != NULL)
    {
        printf("%d ", temp->ticketNumber);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nTicket Center System Menu:\n");
        printf("1. Issue Ticket\n");
        printf("2. Serve Ticket\n");
        printf("3. Display Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            issueTicket();
            break;
        case 2:
            serveTicket();
            break;
        case 3:
            displayTickets();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}