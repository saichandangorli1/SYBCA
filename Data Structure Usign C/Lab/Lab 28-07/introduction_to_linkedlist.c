#include<stdio.h>
#include<stdlib.h>

// Define the structure for a linked list node
struct linkedList {
	int data;
	struct linkedList *next;
};

// Use typedef for convenience, defining 'node' as a pointer to struct linkedList
typedef struct linkedList *node;

// Function to create a new node
node CreateNode() {
    node temp; // Declare a variable of type node
    temp = (node)malloc(sizeof(struct linkedList)); // Allocate memory for the node

    // Always check if malloc was successful
    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        exit(1); // Exit the program if memory allocation fails
    }

    temp->data = 0;   // Initialize data to a default value (e.g., 0)
    temp->next = NULL; // Initialize next to NULL
    return temp;       // Return the newly created node
}

/**
 * @brief Adds a new node with the given data to the end of the linked list.
 *
 * @param head A pointer to the head of the linked list.
 * @param data The integer data to be added to the new node.
 * @return A pointer to the new head of the linked list (might be the same if not empty, or the new node if list was empty).
 */
node addData(node head, int data) {
    node newNode = CreateNode(); // Create a new node
    newNode->data = data;       // Set the data for the new node
    newNode->next = NULL;       // Ensure the new node's next is NULL

    // If the list is empty, the new node becomes the head
    if (head == NULL) {
        return newNode;
    } else {
        // Traverse to the end of the list
        node current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Link the new node to the end
        current->next = newNode;
        return head; // Return the original head
    }
}

/**
 * @brief Displays the data of all nodes in the linked list.
 *
 * @param head A pointer to the head of the linked list.
 */
void displayList(node head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    node current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d ", current->data); // Print the data
        if (current->next != NULL) {
            printf("-> "); // Add an arrow if it's not the last node
        }
        current = current->next; // Move to the next node
    }
    printf("-> NULL\n"); // Indicate the end of the list
}


int main(){
    node head = NULL; // Initialize the head of the linked list to NULL

    // Add some data to the linked list
    head = addData(head, 10); // List: 10
    displayList(head);

    head = addData(head, 20); // List: 10 -> 20
    displayList(head);

    head = addData(head, 30); // List: 10 -> 20 -> 30
    displayList(head);

    head = addData(head, 40); // List: 10 -> 20 -> 30 -> 40
    displayList(head);

    // Add more data to demonstrate
    head = addData(head, 5); // List: 10 -> 20 -> 30 -> 40 -> 5
    displayList(head);


    // --- Memory Cleanup ---
    // It's crucial to free the allocated memory to prevent memory leaks.
    // In a real-world application, you might have a dedicated function for this.
    node current = head;
    node nextNode;
    while (current != NULL) {
        nextNode = current->next; // Store the next node
        free(current);           // Free the current node
        current = nextNode;      // Move to the next node
    }
    head = NULL; // Set head to NULL after freeing all nodes

	return 0;
}
