# **Explanation of C Code: Singly Linked List**

This C program is a classic example that demonstrates how to create and display a **singly linked list**, which is a fundamental data structure in computer science.

### **What the Code Does**

The program first asks the user for the number of elements (nodes) they want in a list. It then prompts the user to enter an integer for each node. As the user provides input, the program allocates memory for each node and links them together in sequence. Finally, it traverses the newly created list from beginning to end and prints out the data from each node.

### **The Full Code**

Here is the complete C code you provided for reference.

\#include \<stdio.h\>  
\#include \<stdlib.h\>

// Structure for a node in a linked list  
struct node {  
    int num;                // Data of the node  
    struct node \*nextptr;   // Address of the next node  
} \*stnode;                  // Pointer to the starting node

// Function prototypes  
void createNodeList(int n); // Function to create the linked list  
void displayList();         // Function to display the linked list

// Main function  
int main() {  
    int n;

    // Displaying the purpose of the program  
    printf("\\n\\n Linked List : To create and display Singly Linked List :\\n");  
    printf("-------------------------------------------------------------\\n");

    // Inputting the number of nodes for the linked list  
    printf(" Input the number of nodes : ");  
    scanf("%d", \&n);

    // Creating the linked list with n nodes  
    createNodeList(n);

    // Displaying the data entered in the linked list  
    printf("\\n Data entered in the list : \\n");  
    displayList();

    return 0;  
}

// Function to create a linked list with n nodes  
void createNodeList(int n) {  
    struct node \*fnNode, \*tmp;  
    int num, i;

    // Allocating memory for the starting node  
    stnode \= (struct node \*)malloc(sizeof(struct node));

    // Checking if memory allocation is successful  
    if(stnode \== NULL) {  
        printf(" Memory can not be allocated.");  
    } else {  
        // Reading data for the starting node from user input  
        printf(" Input data for node 1 : ");  
        scanf("%d", \&num);  
        stnode-\>num \= num;        
        stnode-\>nextptr \= NULL; // Setting the next pointer to NULL  
        tmp \= stnode;

        // Creating n nodes and adding them to the linked list  
        for(i \= 2; i \<= n; i++) {  
            fnNode \= (struct node \*)malloc(sizeof(struct node));

            // Checking if memory allocation is successful  
            if(fnNode \== NULL) {  
                printf(" Memory can not be allocated.");  
                break;  
            } else {  
                // Reading data for each node from user input  
                printf(" Input data for node %d : ", i);  
                scanf(" %d", \&num);

                fnNode-\>num \= num;      // Setting the data for fnNode  
                fnNode-\>nextptr \= NULL; // Setting the next pointer to NULL

                tmp-\>nextptr \= fnNode;  // Linking the current node to fnNode  
                tmp \= tmp-\>nextptr;     // Moving tmp to the next node  
            }  
        }  
    }  
}

// Function to display the linked list  
void displayList() {  
    struct node \*tmp;

    if(stnode \== NULL) {  
        printf(" List is empty.");  
    } else {  
        tmp \= stnode;

        // Traversing the linked list and printing each node's data  
        while(tmp \!= NULL) {  
            printf(" Data \= %d\\n", tmp-\>num); // Printing the data of the current node  
            tmp \= tmp-\>nextptr;               // Moving to the next node in the list  
        }  
    }  
}

### **Code Breakdown**

#### **1\. Headers and Structure Definition**

\#include \<stdio.h\>  
\#include \<stdlib.h\>

// Structure for a node in a linked list  
struct node {  
    int num;                // Data of the node  
    struct node \*nextptr;   // Address of the next node  
} \*stnode;                  // A global pointer to the starting node

* \#include \<stdio.h\>: This includes the standard input/output library for functions like printf and scanf.  
* \#include \<stdlib.h\>: This includes the standard library, which is crucial here for dynamic memory allocation using malloc.  
* struct node: This defines the blueprint for a single element (a "node") in our list. Each node contains:  
  * int num: An integer to hold the data for that node.  
  * struct node \*nextptr: A pointer to another node of the same type. This is the "link" that connects one node to the next one in the chain.  
* \*stnode: This is a **global pointer** that will always point to the very first node (the head) of the list, making it accessible to all functions.

#### **2\. The createNodeList(int n) Function**

This function is the core of the program, responsible for building the list.

void createNodeList(int n) {  
    struct node \*fnNode, \*tmp;  
    int num;

    // 1\. Create the first node (head)  
    stnode \= (struct node \*)malloc(sizeof(struct node));

    // 2\. Get data for the first node  
    printf(" Input data for node 1 : ");  
    scanf("%d", \&num);  
    stnode-\>num \= num;  
    stnode-\>nextptr \= NULL; // It's the only node, so it points to NULL for now  
    tmp \= stnode;           // 'tmp' will keep track of the last node added

    // 3\. Loop to create the rest of the nodes  
    for(int i \= 2; i \<= n; i++) {  
        fnNode \= (struct node \*)malloc(sizeof(struct node));

        printf(" Input data for node %d : ", i);  
        scanf(" %d", \&num);  
        fnNode-\>num \= num;  
        fnNode-\>nextptr \= NULL;  // The new node is the last, so it points to NULL

        tmp-\>nextptr \= fnNode;   // Link the previous last node to the new node  
        tmp \= tmp-\>nextptr;      // Move 'tmp' to point to the new last node  
    }  
}

1. It begins by allocating memory for the very first node (stnode) using malloc.  
2. It reads the data for this first node and sets its nextptr to NULL, as it is temporarily the end of the list.  
3. A temporary pointer, tmp, is created to keep track of the end of the list as it grows. It's initialized to point to the first node.  
4. The for loop then runs to create the remaining n-1 nodes. In each iteration:  
   * Memory is allocated for a new node (fnNode).  
   * The user's data is read into it, and its nextptr is set to NULL.  
   * **The crucial linking step**: tmp-\>nextptr \= fnNode;. This statement takes the node that was previously the *last* one (tmp) and makes its nextptr point to the *newly created* node (fnNode).  
   * tmp is updated (tmp \= tmp-\>nextptr;) to point to this new node, which is now the current end of the list.

#### **3\. The displayList() Function**

This function's job is to traverse the list and print its contents.

void displayList() {  
    struct node \*tmp;

    if (stnode \== NULL) {  
        printf(" List is empty.");  
    } else {  
        tmp \= stnode; // Start from the beginning of the list

        // Traverse the list until the end is reached (a NULL pointer)  
        while (tmp \!= NULL) {  
            printf(" Data \= %d\\n", tmp-\>num); // Print the current node's data  
            tmp \= tmp-\>nextptr;               // Move to the next node in the chain  
        }  
    }  
}

* It uses a temporary pointer tmp that starts at the head of the list (stnode).  
* A while loop continues as long as tmp is not NULL. Since the very last node points to NULL, this condition effectively stops the loop at the end of the list.  
* Inside the loop, it prints the data (tmp-\>num) of the node tmp is currently pointing to.  
* It then moves to the next node by assigning tmp \= tmp-\>nextptr;. This is how traversal works—jumping from one node to the next using the nextptr link.

### **Sample Output**

If you compile and run this program, the interaction would look like this:

 Linked List : To create and display Singly Linked List :  
\-------------------------------------------------------------  
 Input the number of nodes : 3  
 Input data for node 1 : 10  
 Input data for node 2 : 20  
 Input data for node 3 : 30

 Data entered in the list :   
 Data \= 10  
 Data \= 20  
 Data \= 30  
