// // Algorithm for Inorder Traversal:
// // Inorder(tree)
// // • Traverse the left subtree, i.e., call Inorder(left->subtree)
// // • Visit the root.
// // • Traverse the right subtree, i.e., call Inorder(right->subtree)

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

typedef struct Node *NodePtr; // Typedef for pointer only

NodePtr newNode(int item)
{
    NodePtr temp = (NodePtr)malloc(sizeof(struct Node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorderTraversal(NodePtr root)
{
    if (root == NULL)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

int main()
{
    NodePtr root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(9);
    inorderTraversal(root);

    return 0;
}
