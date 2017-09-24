#include <stdio.h>

void digpos(int dig, int i);
void pos(int *result);
int main()
{
    int dig, i; 
    printf("Enter the number: ");
    scanf("%d", &dig);
    printf("Enter the digit to search: ");
    scanf("%d", &i);
    digpos(dig,i);
    return 0;
}

void digpos(int dig, int i){
    int count = 1;
    while ( dig > 0){
        if (dig %10 == i)
            break;
        dig /= 10;
        count++;
    }
    if (dig == 0)
        count = 0;
//    printf("%d\n", dig);
    pos(&count);
}

void pos(int *result){
    printf("The position is %d\n", *result);
    
}
