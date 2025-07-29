// Write a C program to define a structure for student with members: roll number, name, and marks.
// Initialize the structure with values and display the roll number, name, and marks of the student.

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[30];
    float marks;
};

int main()
{
    struct student s1 = {541, "Saichandan", 100};
    printf("Roll no: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %f\n", s1.marks);
    getch();
    return 0;
}
