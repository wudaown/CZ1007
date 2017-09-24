#include <stdio.h>

int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);

int main()
{
    int num, digit, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter k digit position: ");
    scanf("%d", &digit);
    printf("digitValue1(): %d\n", digitValue1(num, digit));
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter k digit position: ");
    scanf("%d", &digit);
    digitValue2(num, digit, &result);
    printf("digitValue2(): %d\n", result);
    return 0;
    return 0;
}

int digitValue1(int num, int k){
    int i ;
    for (i = 1; i < k; ++i) {
//        printf("%d\n", num);
        num = num / 10;
    }
    return num%10;
}

void digitValue2(int num, int k, int *result){
    int i;
    for (i = 1; i < k; ++i) {
        num /= 10;
    }
    *result = num%10;
}
