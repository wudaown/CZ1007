#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[SIZE][SIZE], int r1, int r2);
void swap2Cols(int ar[SIZE][SIZE], int c1, int c2);
void display(int ar[SIZE][SIZE]);
int main()
{
    int array[SIZE][SIZE];
    int row1, row2, col1, col2;
    int i,j;
    printf("Enter the matrix (3x3) row by row: \n");
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
            scanf("%d", &array[i][j]);
    printf("The array is: \n");
    display(array);
    printf("Enter two rows for swapping: ");
    scanf("%d %d", &row1, &row2);
    swap2Rows(array, row1, row2);
    printf("The new array is: \n");
    display(array);
    printf("Enter two columns for swapping: ");
    scanf("%d %d", &col1, &col2);
    swap2Cols(array, col1, col2);
    printf("The new array is: \n");
    display(array);
    return 0;
}
void display(int M[SIZE][SIZE])
{
    int l,m;
    for (l = 0; l < 3; l++) {
        for (m = 0; m < 3; m++)
            printf("%5d", M[l][m]);
        printf("\n");
    }
}
void swap2Rows(int M[SIZE][SIZE], int r1, int r2)
{
    int start = r1 * 3;
    int end = r2 *3;
    int i, tmp;
    int *ptr;
    ptr = M;
    for (i = 0; i < 3; ++i) {
        tmp = *(ptr+start);
        *(ptr+start) = *(ptr+end);
        *(ptr+end) = tmp;
        start += 1;
        end += 1;
    }
}
void swap2Cols(int M[SIZE][SIZE], int c1, int c2)
{
    int start = c1;
    int end = c2;
    int i,tmp;
    int *ptr;
    ptr = M;
    for (i = 0; i < 3; ++i) {
        tmp = *(ptr+start);
        *(ptr+start) = *(ptr+end);
        *(ptr+end) = tmp;
        start += 3;
        end += 3;
    }
}
