// // Write a C program to define a structure for student with members: roll number, name, and marks.
// // Initialize the structure with values and display the roll number, name, and marks of the student.

// #include <stdio.h>
// #include <conio.h>

// struct student
// {
//     int rollno;
//     char name[30];
//     float marks;
// };

// int main()
// {
//     struct student s1 = {541, "Saichandan", 100};
//     printf("Roll no: %d\n", s1.rollno);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %f\n", s1.marks);
//     getch();
//     return 0;
// }

#include <stdio.h>
#include <conio.h>

struct student
{
    int rollno;
    char name[30];
    float marks[3]; // Array to store marks for 3 subjects
};

int main()
{
    struct student s1;
    float total = 0, avg;
    int i;

    // Take input from user
    printf("Enter Roll No: ");
    scanf("%d", &s1.rollno);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter marks for 3 subjects:\n");
    for (i = 0; i < 3; i++)
    {
        printf(" Subject %d: ", i + 1);
        scanf("%f", &s1.marks[i]);
        total += s1.marks[i];
    }

    avg = total / 3.0;

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll no: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    for (i = 0; i < 3; i++)
    {
        printf(" Subject %d Marks: %.2f\n", i + 1, s1.marks[i]);
    }
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);

    getch();
    return 0;
}
