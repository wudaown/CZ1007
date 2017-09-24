#include <stdio.h>
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
	int number, result = -1;
	printf("Enter the number: \n");
	scanf("%d", &number);
	printf("extOddDigits1(): %d\n", extOddDigits1(number));
	extOddDigits2(number, &result);
	printf("extOddDigits2(): %d\n", result);
	return 0;
}
int extOddDigits1(int num)
{
	int result = 0;
    int count = 1;
	while (num > 0)
	{
		if (num % 2 == 1)
		{
			result += (num%10 * count);
            count *= 10;
		}
		num /= 10;
	}
	return result;
}
void extOddDigits2(int num, int *result)
{
	*result = 0;
    int count = 1;
	while (num > 0)
	{
		if (num % 2 == 1)
		{
			*result += (num%10 * count);
            count *= 10;
		}
		num /= 10;
	}
}
