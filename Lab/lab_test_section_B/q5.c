#include <stdio.h>
int minOfMax(int ar[4][4]);
int main() {
	int ar[4][4], row, col, min;
	printf("Enter the matrix (4x4) row by row: \n");
	for (row = 0; row<4; row++)
		for (col = 0; col<4; col++)
			scanf("%d", &ar[row][col]);
	min = minOfMax(ar);
	printf("minOfMax(): %d\n", min);
	return 0;
}
int minOfMax(int ar[4][4])
{	
	int t_ar[4];
	int max;
	int min;
	int i,j;
	for ( i = 0; i < 4; i++)
	{
		max = *(*(ar + i));
		for ( j = 0; j < 4; j++)
		{
			if (*(*(ar+i)+j) > max)
			{
				max= *(*(ar + i) + j);
			}
		}
		*(t_ar+i) = max;
	}

	min = *(t_ar);
	for ( i = 1; i < 4; i++)
	{
		if (*(t_ar+i) < min)
		{
			min = *(t_ar + i);
		}
	}

	return min;
}
