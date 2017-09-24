// CX1007 Data Structures
// Solution

#include <stdio.h>
#include <stdlib.h>


typedef struct _btnode{
    int item;
    struct _btnode *left;
    struct _btnode *right;
} BTNode;

int isBSTLastVal;

void printBSTInOrder(BTNode *node);
void insertBSTNode(BTNode **node, int value);
void isBST(BTNode *node);

int main(){

    BTNode *root = NULL;
    
    printBSTInOrder(root);
    printf("\n");
    
    insertBSTNode(&root, 5);
    printBSTInOrder(root);
    printf("\n");

    insertBSTNode(&root, 3);
    printBSTInOrder(root);
    printf("\n");
    
    insertBSTNode(&root, 1);
    printBSTInOrder(root);
    printf("\n");
    
    insertBSTNode(&root, 7);
    printBSTInOrder(root);
    printf("\n");
    
    insertBSTNode(&root, 8);
    printBSTInOrder(root);
    printf("\n");
    
    insertBSTNode(&root, 6);
    printBSTInOrder(root);
    printf("\n");

    return 0;
}

void printBSTInOrder(BTNode *node){
    
    if (node == NULL)
        return;
    
    printBSTInOrder(node->left);
    printf("%d ", node->item);
    printBSTInOrder(node->right);
}

void insertBSTNode(BTNode **node, int value){
    
    if (*node == NULL){
        *node = malloc(sizeof(BTNode));
        (*node)->item = value;
        return;
    }
    
    // You can assume all values are unique, but this is where you would
    // check for repeated values. If it's already there, just return.
    if ((*node)->item == value){
        printf("Already in BST\n");
        return;
    }
    else if ((*node)->item > value)
        insertBSTNode(&((*node)->left), value);
    else
        insertBSTNode(&((*node)->right), value);
}
