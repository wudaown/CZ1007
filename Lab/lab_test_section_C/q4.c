#include <stdio.h>
#include <string.h>
#define SIZE 10
int findTarget(char *target, char nameptr[SIZE][80], int size);
int main()
{
	char nameptr[SIZE][80];
	char t[40];
	int i, result, size;
	printf("Enter size: \n");
	scanf("%d", &size);
	printf("Enter %d names: \n", size);
	for (i = 0; i<size; i++)
		scanf("%s", nameptr[i]);
	printf("Enter target name: \n");
	scanf("\n");
	gets(t);
	result = findTarget(t, nameptr, size);
	printf("findTarget(): %d\n", result);
	return 0;
}
int findTarget(char *target, char nameptr[SIZE][80], int size)
{
	int i;
	for ( i = 0; i < size; i++)
	{
		if (strcmp(*(nameptr+i),target) == 0)
		{
			return	i;
        }
	}
    return -1;
}
