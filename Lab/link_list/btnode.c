#include <stdio.h>

typedef struct _btnode {
    int item;
    struct _btnode *left;
    struct _btnode *right;
} BTNode;

int similar(BTNode *tree1, BTNode *tree2);

int main()
{
    BTNode tree1, tree2;
    printf("%d\n", similar(&tree1,&tree2) );
    return 0;
}

int similar(BTNode *tree1, BTNode *tree2)
{
        if (tree1 != tree2) return 0;

        return (similar(tree1->left,tree2->left)*1) && (similar(tree1->right,tree2->right)*1);
}
