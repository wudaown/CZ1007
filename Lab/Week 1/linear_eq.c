#include <stdio.h>
#include<math.h>



int main()

{

    float a1, a2, b1, b2, c1, c2, x, y;

    printf("Enter the value for a1, b1, c2, a2, b2, c2: ");

    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);

    x = (b2*c1 - b1*c2) / (a1*b2 - a2*b1);

    y = (a1*c2 - a2*c1) / (a1*b2 - a2*b1);

    printf("The value of x and y are %.2f and %.2f\n", x, y);

    return 0;



}
