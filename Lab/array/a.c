#include <stdio.h>

int main()
{
    int  array[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    int *ptr;
    // int  **dptr;
    ptr = array;
    // dptr = ptr;
    // char *c;
    int i, k,j,l;
    // c = array;
    // for (l = 0; l < 4; ++l) {
    //     printf("%p\n",c+l );
    // }
    for (j = 0; j < 8; ++j) {
    //     printf("%f\n",*(ptr+j) );
        printf("First dereferencing address  %p\n",ptr+j );
    //     printf("Second dereferencing address %p\n",ptr+j );
        printf("First dereferencing vaule  %d\n",*(ptr+j) );
    //     printf("Second dereferencing vaule %f\n", *(*dptr+j));
    }
    // printf("%d\n", *array);
    // for (i = 0; i < 4; ++i) {
    //     for (k = 0; k <2 ; ++k) {
    //         printf("%d\n", array[i][k]);
    //         printf("%p\n", array[i]+k);
    //         
    //     }
    // }
    return 0;
}
