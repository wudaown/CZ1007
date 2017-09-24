#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int id;
    float mark;
    int r;
    printf("Enter the student ID: ");
    scanf("%d", &id );
    while (id != -1){
        printf("Enter student %d 's mark: ", id);
        scanf("%f", &mark);
        r = round((mark)/10);
        switch (r) {
            case 10: case 9: case 8:
                printf("Grade = A\n");
                break;
            case 7:
                printf("Grade = B\n");
                break;
            case 6:
                printf("Grade = C\n");
                break;
            case 5:
                printf("Grade = D\n");
                break;
            default:
                printf("Grade = F\n");
                break;
        }
        printf("Enter the student ID: ");
        scanf("%d", &id );
    } 
    return 0;
}
