#include <stdio.h>
#include <stdlib.h>

void chain_pointer(int ** ptr);

int main()
{
    int *i = NULL ;
    // a pointer pointing to NULL
    // i has an address on the stack
    // *i is suppose to has an address pointing to an integer
    printf("%p\n", &i);
    chain_pointer(&i);
    return 0;
}

void chain_pointer(int ** ptr)
{
    printf("%p\n", ptr);
    // ptr refer to the address of the pointer i
    *ptr = malloc(sizeof(int));
    // allocate 4 bytes on the system heap
    // assign the system heap address to *ptr
    **ptr = 1;
    // *ptr is the value of a pointer to an interger
    // which is the address of i on the system heap
    printf("%p\n", *ptr);
    printf("%d\n", **ptr);
    **ptr = **ptr + 1;
    printf("%d\n", **ptr);

}
