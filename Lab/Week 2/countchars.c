#include <stdio.h>

int main(int argc, char *argv[])
{
    int count = 0, dcount = 0;
    int ch;
    printf("Enter your characters ('#' to end): ");
    ch = getchar();
    while (ch != 35){
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
        // printf("The character enter is upper case\n");
            count ++;
    }
        else if (ch >= 48 && ch <= 57) {
        // printf("The character enter is a number\n");
            dcount++;
        
    }
        ch = getchar();
    }
    printf("The number of digits: %d\n", dcount);
    printf("The number of letters: %d\n", count);

    return 0;
}
