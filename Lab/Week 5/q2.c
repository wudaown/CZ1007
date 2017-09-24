#include <stdio.h>

char *stringncpy(char *s1, char *s2, int n);

int main()
{
    char sourceStr[40], targetStr[40], *target;
    int length;
    printf("Enter the string: ");
    //gets(sourceStr);
    fgets(sourceStr,40,stdin);
    printf("Enter the number of characters: ");
    scanf("%d", &length);
    target = stringncpy(targetStr, sourceStr, length);
    printf("stringncpy(): %s", target);
    return 0;
}

char *stringncpy(char *s1, char *s2, int n)
{
    int i;
    int len = 0;
    int j=0;
    while (*(s2+len) != '\0')
    {
        len++;
    }

    for (i = 0; i < n ; ++i) {
        if (*s2 != '\0')
        {
            *s1 = *s2;
            s1++;
            s2++;
        }
        else
        {
            *s1 = '\0';
            s1++;
        }
        ++j;
    }
    s1-=j;
    return s1;
}
