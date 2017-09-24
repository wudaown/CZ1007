//////////////////////////////////////////////////////////////////////////////////

/* CE1007/CZ1007 Data Structures
2016/17 S2
Author and Lab Group: HENG WEILIANG / DD1
Date:  7 April 2017
Purpose: Implementing the required functions for Assignment 1 (Question 4)*/

//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////////////

typedef struct _bstnode{
    int item;
    struct _bstnode *left;
    struct _bstnode *right;
} BSTNode;   // You should not change the definition of BSTNode

typedef struct _stackNode{
    BSTNode *item;
    struct _stackNode *next;
}StackNode; // You should not change the definition of StackNode

typedef struct _stack
{
    StackNode *top;
}Stack; // You should not change the definition of Stack

///////////////////////// function prototypes ////////////////////////////////////

// This is for question 4. You should not change the prototypes of these functions
void insertBSTNode(BSTNode **node, int value);
void printPostOrderIterative(BSTNode *node);

// You may use the following functions or you may write your own
void push(Stack *stack, BSTNode * node);
BSTNode *pop(Stack * s);
BSTNode *peek(Stack * s);
int isEmpty(Stack *s);
void removeAll(BSTNode **node);

///////////////////////////// main() /////////////////////////////////////////////

int main()
{
    int c, i;

    //Initialize the Binary Search Tree as an empty Binary Search Tree
    BSTNode * root;
    c = 1;
    root = NULL;

    printf("1:Insert an integer into the binary search tree;\n");
    printf("2:Print the post-order traversal of the binary search tree;\n");
    printf("0:Quit;\n");


    while (c != 0)
    {
        printf("Please input your choice(1/2/0): ");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                printf("Input an integer that you want to insert into the Binary Search Tree: ");
                scanf("%d", &i);
                insertBSTNode(&root, i);
                break;
            case 2:
                printf("the resulting post-order traversal of the binary search tree is: ");
                printPostOrderIterative(root); // You need to code this function
                printf("\n");
                break;
            case 0:
                removeAll(&root);
                break;
            default:
                printf("Choice unknown;\n");
                break;
        }

    }

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

void insertBSTNode(BSTNode **node, int value){
    if (*node == NULL)
    {
        *node = malloc(sizeof(BSTNode));

        if (*node != NULL) {
            (*node)->item = value;
            (*node)->left = NULL;
            (*node)->right = NULL;
        }
    }
    else
    {
        if (value < (*node)->item)
        {
            insertBSTNode(&((*node)->left), value);
        }
        else if (value >(*node)->item)
        {
            insertBSTNode(&((*node)->right), value);
        }
        else
            return;
    }
}

//////////////////////////////////////////////////////////////////////////////////

void printPostOrderIterative(BSTNode *root)
{
    Stack s;
    s.top = NULL; /* initialise stack */
    BSTNode *cur;
    BSTNode *tmp;

    /* exit if bst is empty */
    if ( root == NULL)
    {
        return; 
    }

    cur = root;

    while ( cur != NULL || !isEmpty(&s)) /* condition to check */
    {
        if (cur != NULL) /* push the left node into stack */
        {
            push(&s,cur);
            cur = cur->left;
        }
        else if ( cur == NULL) /* end of left node */
        {
            tmp = (s.top)->item->right;
            if ( tmp == NULL){
                tmp = pop(&s);
                printf("%d\n", tmp->item);
                while ( !isEmpty(&s) && tmp == (s.top)->item->right)
                {
                    tmp = pop(&s);
                    printf("%d\n", tmp->item);
                }
            }
            else{
                cur = tmp;
            }
        }
    }
//            if ( (s.top)->item->right == NULL) /* check whether the previous push item */
//            {                                  /* has a right node                     */
//                tmp = pop(&s);                 /* if no right node exist conclude      */
//                printf("%d ", tmp->item);      /* conclude it is leave node and pop    */
//
//                if (s.top->item->right != tmp) { /* check the parent node to right sub node  */
//                    cur = s.top->item->right;    /* if right node exist point to it and exit */
//                } 
//                else if ((s.top)->item->right == tmp) { /* no right node exist thus conclude    */
//                    tmp = pop(&s);                      /* the parent node also ready to access */
//                    printf("%d ", tmp->item);
//                }
//            }
//            else if ((s.top)->item->right == tmp) /* same logic if the parent node's right sub node is      */
//            {                                     /* the pop node conlcude that parent node ready to access */
//                tmp = pop(&s);
//                printf("%d ", tmp->item);
//
//            }
//            else if ( (s.top)->item->right != NULL) /* if previous push node has a right sub node          */
//            {                                       /* then it is not a leave node and point to right node */
//                cur = (s.top)->item->right;
//            }
//
//        }
//    }
    printf("\n");

}

//////////////////////////////////////////////////////////////////////////////////

void push(Stack *stack, BSTNode * node)
{
    StackNode *temp;

    temp = malloc(sizeof(StackNode));

    if (temp == NULL)
        return;
    temp->item = node;

    if (stack->top == NULL)
    {
        stack->top = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = stack->top;
        stack->top = temp;
    }
}


BSTNode *pop(Stack * s)
{
    StackNode *temp, *t;
    BSTNode * ptr;
    ptr = NULL;

    t = s->top;
    if (t != NULL)
    {
        temp = t->next;
        ptr = t->item;

        s->top = temp;
        free(t);
        t = NULL;
    }

    return ptr;
}

BSTNode *peek(Stack * s)
{
    StackNode *temp;
    temp = s->top;
    if (temp != NULL)
        return temp->item;
    else
        return NULL;
}

int isEmpty(Stack *s)
{
    if (s->top == NULL)
        return 1;
    else
        return 0;
}


void removeAll(BSTNode **node)
{
    if (*node != NULL)
    {
        removeAll(&((*node)->left));
        removeAll(&((*node)->right));
        free(*node);
        *node = NULL;
    }
}
