#include <stdio.h>
#include <math.h>
float absoluteSum(int size, float vector[]);
int main()
{
	float vector[10];
	int i, size;
	printf("Enter vector size: \n");
	scanf("%d", &size);
	printf("Enter %d data: \n", size);
	for (i = 0; i<size; i++)
		scanf("%f", &vector[i]);
	printf("absoluteSum(): %.2f\n", absoluteSum(size, vector));
	return 0;
}
float absoluteSum(int size, float vector[])
{
	int i;
	float result = 0;
	for ( i = 0; i < size; i++)
	{
		result += fabs(*(vector + i));

	}
	return	result;
}
