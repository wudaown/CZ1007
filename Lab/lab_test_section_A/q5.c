#include <stdio.h>
int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main()
{
	int number, result = -1;
	printf("Enter the number: \n");
	scanf("%d", &number);
	printf("countOddDigits1(): %d\n", countOddDigits1(number));
	countOddDigits2(number, &result);
	printf("countOddDigits2(): %d\n", result);
	return 0;
}
int countOddDigits1(int num)
{
	int result = 0;
	while (num > 0)
	{
		if ((num%10)%2 == 1)
		{
			result += 1;
		}
		num /= 10;

	}
	return result;
}
void countOddDigits2(int num, int *result)
{
	*result = 0;
	while (num > 0)
	{
		if ((num%10)%2 == 1)
		{
			*result += 1;
		}
		num /= 10;
	}
}