#include <stdio.h>
#define SIZE 3
void transpose(int M[SIZE][SIZE]);
void display(int M[SIZE][SIZE]);
int main()
{
	int ar[SIZE][SIZE];
	int i, j;
	printf("Enter the matrix (3x3) row by row: \n");
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++)
			scanf("%d", &ar[i][j]);
	printf("transpose():\n");
	transpose(ar);
	display(ar);
	return 0;
}
void display(int M[SIZE][SIZE])
{
	int l, m;
	for (l = 0; l < 3; l++) {
		for (m = 0; m < 3; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
	printf("\n");
}
void transpose(int M[SIZE][SIZE])
{	
	int i, j;
	int tmp;
	for ( i = 1; i < SIZE; i++)
	{
		for ( j = 0; j < i; j++)
		{
			tmp = M[i][j];
			M[i][j] = M[j][i];
			M[j][i] = tmp;
		}
	}
}
