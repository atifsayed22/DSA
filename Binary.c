#include<stdio.h>
#include<stdlib.h>

struct Treenode{
    int data;
    struct Treenode *left, *right;
};

// Function to get a new node
struct Treenode* getnode(){
    return (struct Treenode*)malloc(sizeof(struct Treenode));
}

// Function to create a node with a given value
struct Treenode* createnode(int data){
    struct Treenode *root = getnode();
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

// Function to insert a node in the binary search tree
struct Treenode* insertnode(struct Treenode *root, int data){
    if (root == NULL) {
        return createnode(data); // Base case: found the right spot
    }
    
    if (data < root->data) {
        root->left = insertnode(root->left, data); // Insert in the left subtree
    } else {
        root->right = insertnode(root->right, data); // Insert in the right subtree
    }
    return root;
}

// Preorder traversal (root -> left -> right)
void preorder(struct Treenode *root){
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    struct Treenode *root = NULL; // Initialize root as NULL
    int value, choice;

    do {
        printf("Enter the value you want to insert in the node: ");
        scanf("%d", &value);
        
        root = insertnode(root, value); // Insert the new value into the tree
        
        printf("Preorder traversal of the tree: ");
        preorder(root); // Print the tree in preorder
        printf("\n");

        printf("Do you want to insert another value? (1 for yes, 0 for no): ");
        scanf("%d", &choice);

    } while (choice == 1);

    return 0;
}
