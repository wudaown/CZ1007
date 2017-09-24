#include <stdio.h>

void square(int num);
void s(int *ptrN, int *result);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}

void square(int num){
    int r = 0;
    int i, c = 1;
    for (i = 1; i <= num; ++i){
       r += c;
       c += 2;
    }
    int *ptrN = &num;
    s(ptrN, &r);
}

void s(int *ptrN, int *result){
    printf("The square of %d is %d\n", *ptrN, *result);
}
