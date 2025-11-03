#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

   /* unsigned int n = atoi(argv[1]);
    unsigned int w = 0;

    while (n > 0 )
    {
        n /= 10; //equ n = n/10
        w++; 
    }
    printf("w=%u\n", w);
    */

    //reverse des nombres
   unsigned int n = atoi(argv[1]);
   unsigned int w = 0;
   do 
   {
       w *= 10;
       w += n % 10;
       n /= 10;
   } while (n > 0);
   printf("w=%u\n", w);
}