// Write a C program to define a structure 'employee' with members: id, name, and salary.
// Initialize the structure with values and display the id, name, and salary of the employee.

#include <stdio.h>
#include <conio.h>

struct employee
{
    int id;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1 = {1011, "Sai", 2500000.00};
    printf("Employee Details\n");
    printf("Id: %d\n", e1.id);
    printf("Name: %s\n", e1.name);
    printf("Salary: %f\n", e1.salary);
    getch();
    return 0;
}
