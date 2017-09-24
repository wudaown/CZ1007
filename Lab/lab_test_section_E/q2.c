#include <stdio.h>
void rSquare2(int num, int *result);
int main()
{
	int x, result;
	printf("Enter the number: \n");
	scanf("%d", &x);
	rSquare2(x, &result);
	printf("rSquare2(): %d\n", result);
	return 0;
}
void rSquare2(int num, int *result)
{
	if (num == 1)
	{
		*result = 1;
	}
	else
	{
		rSquare2(num - 1, result);
		*result += 2 * num - 1;
	}
}
