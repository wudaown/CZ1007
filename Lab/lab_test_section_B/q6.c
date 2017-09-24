#include <stdio.h>
void readMatrix(int M[4][4]);
void reduceMatrix(int matrix[4][4]);
void display(int M[4][4]);
int main()
{
	int A[4][4];
	readMatrix(A);
	reduceMatrix(A);
	printf("reduceMatrix(): \n");
	display(A);
	return 0;
}
void display(int M[4][4])
{
	int l, m;
	for (l = 0; l < 4; l++) {
		for (m = 0; m < 4; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
	printf("\n");
}
void readMatrix(int M[4][4])
{
	int i, j;
	printf("Enter the matrix (4x4) row by row: \n");
	for (i = 0; i<4; i++)
		for (j = 0; j<4; j++)
			scanf("%d", &M[i][j]);
}
void reduceMatrix(int matrix[4][4])
{
	int *ptr;
    int i,j;
	int step ;
	int col = 0;
	int inner = 3;
	ptr = &matrix[0][0];
	for ( i = 0; i < 4; i++)
	{	
		step = col + 4;
		for ( j = 0; j < inner; j++)
		{
			*(ptr + col) += *(ptr + step);
			*(ptr + step) = 0;
			step += 4;
		}
		col += 5;
		inner -= 1;
	}
}
