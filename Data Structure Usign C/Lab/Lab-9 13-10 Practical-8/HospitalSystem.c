

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Patient
{
    char name[50];
    int priority;
    struct Patient *next;
};
typedef struct Patient *node;
node front = NULL;
node rear = NULL;
void addPatient(char *name, int priority)
{
    node newPatient = (node)malloc(sizeof(struct Patient));
    if (!newPatient)
    {
        printf("Memory allocation error!\n");
        return;
    }
    strcpy(newPatient->name, name);
    newPatient->priority = priority;
    newPatient->next = NULL;

    if (front == NULL || priority < front->priority)
    {
        newPatient->next = front;
        front = newPatient;
    }
    else
    {
        node temp = front;
        while (temp->next != NULL && temp->next->priority <= priority)
        {
            temp = temp->next;
        }
        newPatient->next = temp->next;
        temp->next = newPatient;
    }
    printf("Added Patient: %s with priority %d\n", name, priority);
}

void servePatient()
{
    if (front == NULL)
    {
        printf("No patients to serve!\n");
        return;
    }
    node temp = front;
    printf("Served Patient: %s with priority %d\n", temp->name, temp->priority);
    front = front->next;
    free(temp);
}

void displayPatients()
{
    if (front == NULL)
    {
        printf("No patients in the queue!\n");
        return;
    }
    node temp = front;
    printf("Patients in the queue:\n");
    while (temp != NULL)
    {
        printf("Name: %s, Priority: %d\n", temp->name, temp->priority);
        temp = temp->next;
    }
}

int main()
{
    int choice, priority;
    char name[50];
    while (1)
    {
        printf("\nHospital Emergency Room System\n");
        printf("1. Add Patient\n");
        printf("2. Serve Patient\n");
        printf("3. Display Patients\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter patient name: ");
            scanf("%s", name);
            printf("Enter patient priority (1-Critical, 2-Serious, 3-Normal): ");
            scanf("%d", &priority);
            addPatient(name, priority);
            break;
        case 2:
            servePatient();
            break;
        case 3:
            displayPatients();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}