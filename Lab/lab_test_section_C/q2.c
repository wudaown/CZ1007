#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
	char a[80], b[80];
	printf("Enter the first string: \n");
	gets(a);
	printf("Enter the second string: \n");
	gets(b);
	printf("compareStr(): %d\n", compareStr(a, b));
	return 0;
}
int compareStr(char *s, char *t)
{
	int r = 0;
	while (*s != '\0')
	{
		if ((int)*s != (int)*t)
		{
			r = (int)*s - (int)*t;
			break;
		}
		s++;
		t++;
	}
	return r;
}
