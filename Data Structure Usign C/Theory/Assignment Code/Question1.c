// Write a C program that read the name, age and salary of 10 person and maintain them in linked list sorted by name

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100

struct Person
{
    char name[MAX_NAME_LEN];
    int age;
    float salary;
    struct Person *next;
};

typedef struct Person *node;

// Create a new node
node createNode(char name[], int age, float salary)
{
    node temp = (node)malloc(sizeof(struct Person));
    strcpy(temp->name, name);
    temp->age = age;
    temp->salary = salary;
    temp->next = NULL;
    return temp;
}

// Insert node in sorted order by name
node insertSorted(node head, char name[], int age, float salary)
{
    node temp = createNode(name, age, salary);
    if (head == NULL || strcmp(name, head->name) < 0)
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        node temp2 = head;
        while (temp2->next != NULL && strcmp(name, temp2->next->name) > 0)
        {
            temp2 = temp2->next;
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
    return head;
}

// Print all nodes
void printList(node head)
{
    while (head != NULL)
    {
        printf("Name: %s, Age: %d, Salary: %.2f\n", head->name, head->age, head->salary);
        head = head->next;
    }
}

int main()
{
    node head = NULL;
    char name[MAX_NAME_LEN];
    int age;
    float salary;
    int i;

    printf("Enter details for 10 persons:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Person %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", name);
        printf("Age: ");
        scanf("%d", &age);
        printf("Salary: ");
        scanf("%f", &salary);
        head = insertSorted(head, name, age, salary);
    }

    printf("\nSorted list by name:\n");
    printList(head);

    return 0;
}
