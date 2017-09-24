#include <stdio.h>

void numDigit(int num);
void numD(int *result);

int main()
{
    // unsigned int num; 
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    numDigit(num);

    return 0;
}

void numDigit(int num){
    // int count = 0;
    // while (num > 0){
    //num /= 10;
    //count++;

    //}    
    numD(&num);
}

void numD(int *result){
    int **ptr;
    ptr = &result;
    char *p = (char*) result;
    // ++p; // will increment by one byte
    printf("Number of digits is %d\n", *result);
    int i ;
    for (i = 0; i < 20; ++i) {
        printf("%p, %d\n", (p+i), *(p+i));
    }
}
