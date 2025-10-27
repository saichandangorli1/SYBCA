// Algorithm for Preorder Traversal:
// Preorder(tree) 
// •	Visit the root. 
// •	Traverse the left subtree, i.e., call Preorder(left->subtree) 
// •	Traverse the right subtree, i.e., call Preorder(right->subtree)

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

typedef struct Node *NodePtr;

NodePtr newNode(int item)
{
    NodePtr temp = (NodePtr)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void preorderTraversal(NodePtr root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data); // Visit node first
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    NodePtr root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Preorder: ");
    preorderTraversal(root);
    printf("\n");
    return 0;
}
