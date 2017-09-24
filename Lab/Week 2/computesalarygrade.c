#include <stdio.h>

int main()
{
    int salary, merit;
    printf("Enter the salary: ");
    scanf("%d", &salary);
    printf("Enter the merit: ");
    scanf("%d", &merit);
    if (salary >= 500 && salary <= 649) {
        if (salary >= 600 ) {
            if (merit < 10)
                printf("The grade : C\n");
            else
                printf("The grade : B\n");
            }
        else
            printf("The grade : C\n");
        }
    else if (salary >= 600 && salary <= 799) {
        if (salary >= 700){
            if (merit < 20) 
                printf("The grade : B\n");  
            else
                printf("The grade : A\n");
            }
        else
            printf("The grade : B\n");
    }
    else if (salary >= 700 && salary <= 899) {
        
        printf("The grade : A\n");
    }
        return 0;
}
