#include <stdio.h>
typedef struct t {
	char source;
	char code;
} Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main()
{
	char s[80], t[80];
	Rule table[5] = { 'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };
	printf("Source string: \n");
	scanf("%s", s);
	encodeChar(table, s, t);
	printf("Encoded string: %s\n", t);
	return 0;
}
void encodeChar(Rule table[5], char *s, char *t)
{
    int i;
	while (*s != '\0')
	{
		for ( i = 0; i < 5; i++)
		{
			if (*s == table->source)
			{
				*t = table->code;
				break;
			}
            table++;
            *t = *s;
		}
		s++; t++;
	}
	*t = '\0';
}
