#include <stdio.h>
void add1(int ar[], int size);
int main()
{
int array[3][4];
int h,k;
    for (h = 0; h < 3; h++)
        for (k = 0; k < 4; k++)
            scanf("%d", &array[h][k]);

    for (h = 0; h < 3; h++)
        add1(array[h], 4);

    for (h = 0; h < 3; h++) {
        for (k = 0; k < 4; k++)
        //    printf("%5d", array[h][k]);
        // putchar("\n");
        printf("\n");
    }
return 0;
}

void add1(int ar[], int size)
{
int k;
for (k = 0; k < size; k++)
    printf("%5d", ar[k]);
    // ar[k]++;
printf("\n");
}
