#include <stdio.h>

int main()
{
    int hour;
    float gross, tax, net;
    printf("Enter the number of hours work: ");
    // hour = getchar();
    scanf("%d", &hour);
    if (hour > 40) {
        gross = (hour - 40 )* 9 + 40 * 6.0;
    }
    else if (hour <= 40) {
        gross = hour * 6.0;
    }

    
    if (gross > 1500) {
        tax = (gross - 1500) * 0.3 + 500 * 0.2 + 1000 * 0.1;
        
    }
    else if (gross > 1000 && gross < 1500) {
        tax = ( gross - 1000) * 0.2 + 1000 * 0.1;
    }
    else if (gross < 1000) {
        tax = gross * 0.1;
        
    }

    net = gross - tax;

    printf("Gross pay = %f\n", gross);
    printf("Tax = %f\n", tax);
    printf("Net pay = %f\n", net);
    return 0;
}
