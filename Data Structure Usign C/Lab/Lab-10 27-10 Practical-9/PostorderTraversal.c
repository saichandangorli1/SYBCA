// Algorithm for Postorder Traversal:
// Algorithm Postorder(tree)
// •	Traverse the left subtree, i.e., call Postorder(left->subtree)
// •	Traverse the right subtree, i.e., call Postorder(right->subtree)
// •	Visit the root

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

void postorderTraversal(NodePtr root)
{
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data); // Visit node last
}

int main()
{
    NodePtr root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("Postorder: ");
    postorderTraversal(root);
    printf("\n");
    return 0;
}
