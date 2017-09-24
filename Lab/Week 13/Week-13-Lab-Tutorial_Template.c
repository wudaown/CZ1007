// CE1007/CZ1007 Data Structures

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

void printBSTInOrder(BTNode *node)
{

	// write your code here
}

void insertBSTNode(BTNode **node, int value)

{

	// write your code here	
}

