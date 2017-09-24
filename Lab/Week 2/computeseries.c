#include <stdio.h>
#include <math.h>

int factorial(int fac);
int main()
{
    int n;
    float x, result = 1.0;
    printf("Please enter the value of x: ");
    scanf("%f", &x);
    for (n = 1; n < 11; ++n) {
       result += pow(x,n)/ factorial(n);
    }   
    printf("%lf\n", result);
    return 0;
}

int factorial(int fac){
    if (fac <= 1) {
        return 1;
    }
    else{
        return fac*factorial(fac -1);
    }

}
