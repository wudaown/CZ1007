#include <stdio.h>

int main(int argc, char *argv[])
{
    int height;
    int i ;
    int o = 0;
    printf("Enter the height: ");
    scanf("%d", &height);
    for (i = 0; i < height; ++i) {
        // printf("%d\n", i);
        int m = (i+1) % 3;
        for (o = 0; o < i+1 ; ++o) {
            if (m == 0)
                printf("3");
            else
                printf("%d", m);
            //if (m == 1)
            //    printf("1");
            //else if (m == 2) 
            //    printf("2");
            //else if (m == 0) 
            //    printf("3");
        }
        // printf("1");
            printf("\n");
        // printf("%d\n", m);
        //if (m == 1){
        //    for (o = 0; o < i+1 ; ++o) {
        //       printf("1");
        //    }
        //    // printf("1");
        //    printf("\n");
        //}
        //else if (m == 2) {
        //    for (o = 0; o < i+1 ; ++o) {
        //       printf("2");
        //    }
        //    // printf("2"); 
        //    printf("\n");
        //}
        //else if (m == 0) {
        //    for (o = 0; o < i+1 ; ++o) {
        //       printf("3");
        //    }
        //    // printf("3");
        //    printf("\n");
        //}
        }
    return 0;
}

