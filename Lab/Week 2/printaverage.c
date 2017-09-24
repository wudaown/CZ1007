#include <stdio.h>

int main(int argc, char *argv[])
{
    int total, count, lines, input;
    double average;
    int i;
    printf("Enter the number of lines: ");
    scanf("%d", &lines);
    for (i = 0; i < lines ; i++){
        printf("Enter the input for line %d: ", i+1);
        scanf("%d", &input);
        while (input != -1){
            total += input;
            count++;
            scanf("%d", &input);
        }
        average = (float)total / count;
        printf("average is %.2lf\n", average);
    }
    return 0;
}
