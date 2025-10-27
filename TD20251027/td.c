#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
    /*int a;
    int b;
    printf("inserer la valeur de a et b:");
    scanf("%d %d", &a, &b);
    printf("le quotient vaut: %d\n", a / b); //forme de variable intermediaire en cas de calculs plus complexes
    printf("le reste vaut: %d\n", a % b);
    
    int a = 10;
    printf("%d\n", a++);

    //a++; //post incrementation
    //printf("%d\n", a);

    a = 10; // deja declarée
    printf("%d\n", ++a);

    //++a; pre incrementation
    //printf("%d", a);

    char x = 127; //signé donc -128 
    x++;
    */

    unsigned int i = 0;

    for (i = 2; i < 100; i++)
    {
        bool is_prime = true;
        unsigned int j = 0;
        for (j = 2; j <= i - 1; j++)
        {
            if (i % j == 0)
            is_prime = false;
        }
        if (is_prime)
        {
            printf("%u\n", i);
        }
    }

    return 0;
}