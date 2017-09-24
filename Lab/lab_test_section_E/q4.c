#include <stdio.h>
#pragma clang diagnostic push
#pragma clang diagnostic pop
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
int rStrLen(char *s);
int main() {
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("rStrLen(): %d\n", rStrLen(str));
    return 0;
}

int rStrLen(char *s)
{
    if ( *s == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + rStrLen(s + 1);
    }
}
