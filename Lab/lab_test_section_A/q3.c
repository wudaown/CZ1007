#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
	int power;
	float number, result;
	printf("Enter the number and power: \n");
	scanf("%f %d", &number, &power);
	printf("power1(): %.2f\n", power1(number, power));
	power2(number, power, &result);
	printf("power2(): %.2f\n", result);
	return 0;
}
float power1(float num, int p)
{
	float result = 1.0;
	if (p == 0)
	{
		return result;
	}
	else if (p > 0)
	{
		while (p > 0)
		{
			result *= num;
			p -= 1;
		}
		return result;
	}
	else
	{
		while (p < 0)
		{
			result *= num;
			p += 1;
		}
		return 1 / result;
	}
}
void power2(float num, int p, float *result)
{
	*result = 1;
	if (p == 0)
	{
		*result = 1;
	}
	else if (p > 0)
	{
		while (p > 0)
		{
			*result *= num;
			p -= 1;
		}
	}
	else
	{
		while (p < 0)
		{
			*result *= num;
			p += 1;
		}
		*result = 1 / *result;
	}
}
