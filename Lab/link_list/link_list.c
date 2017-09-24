#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* define the structure of a link list          */
/* starting with an element follow by a pointer */
typedef struct node
{
    int value;
    struct node *next;
} linkNode;

typedef struct _linkList
{
    linkNode * node;
    int size;
} linkList;

void printList(linkNode *head);
linkNode * findList(linkNode *head, int index);
void insertList(linkNode ** ptrHead, int index, int value);
void removeNode(linkNode ** ptrHead, int index);
int sizeList(linkNode *head);
linkNode *copyList(linkNode *head);
int swap2n(linkNode *head);
void exchange_value(linkNode *head);
void exchange_node(linkNode *head);
int similar(linkNode *head, linkNode *head2);

int  main()
{
    linkNode *head = NULL;
    linkNode *head1 = NULL;
    srand((unsigned int) time(NULL));
    int size1 = sizeList(head1);
    int size = sizeList(head);
    insertList(&head, 0, 100);
    insertList(&head1, 0, 100);
    insertList(&head, 1, 220);
    insertList(&head1, 1, 220);
//    while (size < 10)
//    {
//        insertList(&head, 0, rand() % 100);
//        insertList(&head1, 0, rand() % 100);
//        //printList(head);
//        size++;
//        size1++;
//    }
    printList(head);
    printList(head1);
    printf("%d\n", similar(head,head1));
//    exchange_value(head);
//    printList(head);
//    printf("%d\n", swap2n(head));
//    linkNode *new = NULL;
//    new = copyList(head);
//    printf("Copy list: ");
//    printList(new);

//    while (size > 0)
//    {
//        removeNode(&head, 0);
//        printList(head);
//        size--;
//    }
    // printf("%p\n", &head); /* the address of head on system stack */
    // printList(head);
    //insertList(&head, 0, 3);
    //insertList(&head, 0, 4);
    //insertList(&head, 0, 5);
    //printList(head);
    //removeNode(&head, 0);
    //printList(head);
    //insertList(&head, 1, 6);
    //printf("size is %d\n", sizeList(head));
    //printList(head);
    return 0;
}

/*  **ptrHead refer the a pointer to a pointer pointing to a link list   */
/*  within insertList ptrHead should has the system address as &head     */

int similar(linkNode *head, linkNode *head2)
{
    if (head == NULL && head2 == NULL) return 1;
    if (head != NULL && head2 != NULL)
    {
        if (head->value == head2->value) return 1*similar(head->next,head2->next);
        else return 0;
        // return (head->value == head2->value) && similar(head->next,head2->next);
    }
    return 0;
}
void exchange_value(linkNode *head){
    linkNode *max, *min, *current;
    int tmp;
    current = head;
    max = head; min = head;
    while (current != NULL){
        if (current->value > max->value)  max = current;
        else if (current->value < min->value) min = current;
        current = current->next;
    }
    tmp = max->value;
    max->value = min->value;
    min->value = tmp;

}
int swap2n(linkNode *head)
{
    int size = 0;
    linkNode *ptr = head;
    linkNode *tmp;
    while ( ptr->next->next != NULL)
    {
        ptr = ptr->next;
        size++;
    }
    size += 2;
    tmp = head->next;
    head->next = ptr->next;
    head->next->next = tmp->next;
    ptr->next = tmp;
    tmp->next = NULL;
    //tmp = head;
    //while (tmp != NULL)
    //{
    //    tmp = tmp->next;
    //    size++;
    //}
    //int i;
    //for (i = 0; i < size-2; ++i) {
    //    ptr = ptr->next; 
    //}
    //tmp = ptr;
    //printf("%d\n", tmp->value);
    //for (i = 0; i < 2;++i){
    //    ptr = ptr->next;
    //}
    return size;
}

linkNode *copyList(linkNode *head)
{
    linkNode *current;
    linkNode *tail;
    linkNode *newlist;
    current = head;
    tail = NULL;
    newlist = NULL;
    while (current != NULL)
    {
        if (newlist == NULL)
        {
            newlist = malloc(sizeof(linkNode));
            newlist->value = current->value;
            newlist->next = NULL;
            tail = newlist;
        }
        else
        {
            tail->next = malloc(sizeof(linkNode));
            tail = tail->next;
            tail->value = current->value;
            tail->next = NULL;
        }
        current = current->next;
    }
    
    return newlist;
}

void insertList(linkNode ** ptrHead, int index, int value)
{
    linkNode *pre, *cur;
    // printf("%p\n", ptrHead); /* address of ptrHead (aka head) on the system stack */

    /*  *ptrHead refers to the address of the pointer ptrHead (aka head) is pointing to */
    /*  *ptrHead is a address on the system stack                                       */
    /*  **ptrHead is the address on the system heap, the address to the link list       */
    /*  to access the element of the link list (**ptrHead).value or (**ptrHead).next    */
    if (*ptrHead == NULL || index == 0)
    {
        /*  in the case of insert at the start of the link list */
        /*  let cur hold the current link list                  */
        /*  make the new node and point it to the hold list     */
        cur = *ptrHead;
        *ptrHead = malloc(sizeof(linkNode));
        /*  assign the address of the system heap of the link list to *ptrHead */
        /*  which is dereference from ptrHead, so *ptrHead is another pointer pointing to link list */
        (*ptrHead)->value = value;
        //  printf("%d\n", (**ptrHead).value);
        (*ptrHead)->next = cur;

    }
    else if (*ptrHead != NULL)
    {
        //  pre = findList(*ptrHead, index-1);
        if ((pre = findList(*ptrHead, index-1)) != NULL)
        {
            cur = malloc(sizeof(linkNode));
            cur->value = value;
            cur->next = pre->next;
            pre->next = cur;
        }
    }

}


void removeNode(linkNode ** ptrHead, int index)
{
    linkNode *clean, *cur;
    if (index == 0)
    {
        clean = (*ptrHead);
        *ptrHead = (*ptrHead)->next;
        clean->next = NULL;
    }
    else
    {
        cur = findList(*ptrHead, index -1);
        clean = findList(*ptrHead, index);
        cur->next = clean->next;
        clean->next = NULL;
    }
    free(clean);
}

int sizeList(linkNode *head)
{
    int size=0;
    linkNode *cur;
    cur = head;
    if (cur == NULL)
    {
        return 0;
    }
    while (cur != NULL)
    {
        cur = cur->next;
        size++;
    }
    return size;
}

linkNode * findList(linkNode *head, int index)
{
    if (head == NULL || index < 0)
    {
        return NULL;
    }

    while (index > 0)
    {
        head = head->next;
        if (head == NULL)
        {
            return NULL;
        }
        index--;
    }
    return head;
}

void printList(linkNode *head)
{
    linkNode *cur = head;
    if (cur == NULL)
    {
        return;
    }
    while (cur != NULL)
    {
        printf("%d ", cur->value);
        cur = cur->next;
    }
    printf("\n");
}
