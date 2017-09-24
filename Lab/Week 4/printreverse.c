#include <stdio.h>
int readArray(int ar[ ]);
void printReverse1(int ar[ ], int size);
void printReverse2(int ar[ ], int size);
void reverseAr(int ar[ ], int size);
int main()
{
    int ar[10];
    int size, i;
    size = readArray(ar);
    printReverse1(ar, size);
    printReverse2(ar, size);
    reverseAr(ar, size);
    printf("reverseAr(): ");
    if (size > 0) {
        for (i=0; i<size; ++i)
            printf("%d ", ar[i]);
    }
    return 0;
}

int readArray(int ar[])
{
    int i, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter %d array: ", size);
        for (i=0; i <= size-1; i++)
            scanf("%d", &ar[i]);
    return size;
}

void printReverse1(int ar[], int size)
{
    int i;
    for (i = 0; i < size; ++i) {
       printf("%d ", ar[size-1-i] ); 
    }
    printf("\n");
}

void printReverse2(int ar[], int size)
{
    int i;
    int *ptr;
    ptr = ar;
    for (i = 0; i < size; ++i) {
       printf("%d ",*(ptr+size-1-i) ); 
    }
    printf("\n" );
}

void reverseAr(int ar[ ], int size)
{
    int j = size-1;
    int i = 0;
    int tmp;
    while (i<j){
        tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;
        j--;
        i++;
    }
    //int ar2[size];
    //for (i = size-1; 0<= i ; --i) {
    //    ar2[size-1-i] = ar[i];

    //}
    //for (i = 0; i < size; ++i) {
    //   ar[i] = ar2[i] ;
    //}
}
