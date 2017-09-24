#include <stdio.h>
#pragma clang diagnostic push
#pragma clang diagnostic pop
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
int countSubstring(char str[], char substr[]);
int main()
{
	char str[80], substr[80];
	printf("Enter the string: \n");
	gets(str);
	printf("Enter the substring: \n");
	gets(substr);
	printf("countSubstring(): %d\n", countSubstring(str, substr));
	return 0;
}
int countSubstring(char str[], char substr[])
{

		int i, j, k, count = 0;
		for (i = 0; str[i] != '\0'; i++) {
			for (j = i, k = 0; substr[k] == str[j]; k++, j++)
				if (substr[k + 1] == '\0')
					count++;
		}
		return count;
}

