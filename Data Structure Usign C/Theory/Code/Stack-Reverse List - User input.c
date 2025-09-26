#include <stdio.h>
#include <stdlib.h>

struct linked_list {
    int data;
    struct linked_list *next;
};

int stack[30], top = -1;
struct linked_list* head = NULL;

// Push into linked list (insert at beginning)
void push(struct linked_list** head, int n) {
    struct linked_list* newnode = (struct linked_list*)malloc(sizeof(struct linked_list));
    newnode->data = n;
    newnode->next = (*head);
    (*head) = newnode;
}

// Traverse linked list and push into stack
void intostack(struct linked_list* head) {
    printf("\nLinked List: ");
    while (head != NULL) {
        printf("%d ", head->data);
        stack[++top] = head->data;
        head = head->next;
    }
}

// Print elements from stack (reversed order)
void printfromstack() {
    printf("\nReversed (using stack): ");
    while (top >= 0) {
        printf("%d ", stack[top--]);
    }
}

int main() {
    int i, val;

    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &val);
        push(&head, val);
    }

    intostack(head);
    printfromstack();

    return 0;
}
