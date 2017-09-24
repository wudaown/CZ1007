#include <stdio.h>

int main()
{
    //char ch;
    int ch;
    printf("Enter a characher: ");
    // scanf("%c", &ch);
    ch = getchar();
    //ch = (int)ch;
    if (ch >= 65 && ch <= 90){
        printf("The character enter is upper case\n");
    }
    else if (ch >= 97 && ch <= 122) {
        printf("The character enter is lower case\n");
        
    }
    else if (ch >= 48 && ch <= 57) {
        printf("The character enter is a number\n");
        
    }
    printf("%d\n", ch);
    return 0;
    
}
