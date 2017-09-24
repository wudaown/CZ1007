#include <stdio.h>

int main()
{
	int numofstudent;
	int totalmarks, pass, fail, mark, counter;
	double average;

	totalmarks = pass = fail = 0;
	printf("Enter the no. of students: ");
	scanf("%d", &numofstudent);
	printf("%d\n", numofstudent);

	for (counter = 1; counter <= numofstudent; counter++)
	{
		printf("Enter marks: ");
		scanf("%d", &mark);
		totalmarks += mark;

		if (mark < 50)
			fail++;
		else
			pass++;

	}
	average = (double)totalmarks / numofstudent;
	printf("Average marks: %.2f", average);
	return 0;
}
