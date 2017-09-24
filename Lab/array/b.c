#include <stdio.h>

int main () {

   /* an array with 5 elements */
   int balance[5] = {1000, 2, 3, 17, 50};
   int *p;
   int i;

   p = balance;
 
   /* output each array element's value */
   printf( "Array values using pointer\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %d\n",  i, *(p + i) );
   }

   printf( "Array values using balance as address\n");
	
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %d\n",  i, *(balance + i) );
   }
 
   return 0;
}
