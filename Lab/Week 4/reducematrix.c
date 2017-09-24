#include <stdio.h>
#define SIZE 5

void readMatrix(int M[SIZE][SIZE]);
void reduceMatrix (int matrix[SIZE][SIZE]);
void display(int M[SIZE][SIZE]);

int main()
{
int A[SIZE][SIZE];
readMatrix(A);
reduceMatrix(A);
printf("reduceMatrix(): \n");
display(A);
return 0;
}

void readMatrix(int M[SIZE][SIZE])
{
int i, j;
printf("Enter the matrix (SIZExSIZE) row by row: \n");
for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
        scanf("%d", &M[i][j]);
}

void display(int M[SIZE][SIZE])
{
int l,m;
for (l = 0; l < SIZE; l++) {
for (m = 0; m < SIZE; m++)
    printf("%5d", M[l][m]);
printf("\n");
}
}

void reduceMatrix(int matrix[SIZE][SIZE])
{
    int i, j, start, tmp = 0;
    int inner = SIZE;
    int *ptr;
    ptr = matrix;
    for (i = 0; i < SIZE -1 ; ++i) {
        start = i * (SIZE+1);
        for (j = 0;  j < inner; ++j) {
            tmp += *(ptr+start);
            *(ptr+start) = 0;
            start += SIZE;
        }   
        *(ptr+(i*(SIZE+1))) = tmp;
        tmp = 0;
        inner -= 1;
    }
    // *(ptr+0) = tmp;
/* add your code here */
}
