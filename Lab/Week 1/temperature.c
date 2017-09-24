#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS



int main()

{



    float f, c;

    printf("Enter the temperature in F:\n");

    scanf("%f", &f);

    c = (f - (float)32.0) * ((float)5.0 / (float)9.0);



    printf("%.2f\n", c);

    return 0;



}

