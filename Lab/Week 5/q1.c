#include <stdio.h>
char *sweepSpace1(char *sentence);
char *sweepSpace2(char *sentence);

int main()
{
    char str[80];
    printf("Enter the string: ");
    //gets(str);
    fgets(str,80,stdin);
    printf("sweepSpace1(): %s\n", sweepSpace1(str));
    printf("sweepSpace2(): %s\n", sweepSpace2(str));
    return 0;
}

char *sweepSpace1(char *sentence)
{
    int i, j, len;
    i=0; len=0;
    while (sentence[i]!='\0'){
        len++;
        i++;
    }
    j = 0;
    for ( i=0; i < len; i++)
    {
        if (sentence[i] != ' ')
        {
        // write 2 statements here to update the string by removing
        // any space detected
        sentence[j] = sentence[i];
        j++;
        }
    }
    sentence[j] = '\0'; // add a null character to end of string
    return sentence;
}

char *sweepSpace2(char *sentence)
{
    char *str ;
    str = sentence;
    int len = 0;
    int i;
    int j =0;
    while (*(sentence+len) != '\0')
    {
        len++;
    }
    for (i = 0; i < len; ++i)
    {
        if (*(sentence+i) != ' ')
        {
            *str = *(sentence+i);
            //printf("%c", *str);
            str++;
            j++;
        }
    }
    str-= j;
    //for (i = 0; i < len; ++i) {
    //    str--;
    //}
    return str;
}
