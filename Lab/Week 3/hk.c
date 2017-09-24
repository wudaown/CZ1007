#include <stdio.h>

void function0();
void function1(int h, int k);
void function2(int *h, int *k);
int main()
{
    int h, k;
    h = 5;
    k = 15;
    printf("h = %d, k = %d\n", h,k);
    function0();
    printf("h = %d, k = %d\n", h,k);
    function1(h,k);
    printf("h = %d, k = %d\n", h,k);
    function2(&h, &k);
    printf("h = %d, k = %d\n", h,k);
}

void function0(){
    int h, k;
    h = k = -100;
    printf("h = %d, k = %d\n", h,k);
    }

void function1(int h,int k){
    printf("h = %d, k = %d\n", h,k);
    h = k = 100;
    printf("h = %d, k = %d\n", h,k);
    }

void function2(int *h,int *k){
    printf("h = %d, k = %d\n", *h,*k);
    *h = *k = 200;
    printf("h = %d, k = %d\n", *h,*k);
   }

