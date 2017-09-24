#include <stdio.h>
#include <string.h>

#define SIZE 10

int findTarget(char *target, char nameptr[SIZE][80], int size);

int main()
{
    char nameptr[SIZE][80];
    char t[40];
    int i, result, size;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter %d names: ", size);
    for (i=0; i<size; i++)
        scanf("%s", nameptr[i]);
    printf("Enter target name: ");
    scanf("\n");
//    gets(t);
    fgets(t,40,stdin);
    result = findTarget(t, nameptr, size);
    printf("findTarget(): %d\n", result);
    return 0;
}

int findTarget(char *target, char nameptr[SIZE][80], int size)
{
    int i;
    int r=0;
    for (i = 0; i < size; ++i) {
        if (strcmp(target,nameptr[i])  == 10)
        {
            r = i;
            break;
        }
        else
        {
            r = -1;
        }
    }
    return r;
}
