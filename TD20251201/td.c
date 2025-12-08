#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
    // if (argc < 2)
    // {
    //     printf("one argument is missing");
    //     return 1;
    // }

    // unsigned int n = atoi(argv[1]);

    // if ( n % 2 == 0)
    // {
    //     printf("NOT AN ODD NUMBER");
    //     return 2;
    // }

    // for (int l = 1; l <= n; l++)
    // {
    //     for (int c = 0; c < n - l; c++)
    //         putchar(' ');
    //     for (int c = 0; c < (2 * l - 1); c++)
    //         putchar('*');
    //     putchar('\n');
    // }

    for (int l = 0; l < 2; l++)
    {
        for (int c = 0; c < n - 1; c++)
            putchar(' ');
        puts("|");
    }

    for (int c = 0; c < n - 2; c ++)
        putchar(' ');
    puts("---");

    // unsigned long n = atol(argv[1]);

    // double a = 0;
    // double f = 0;
    // double p = 0;
    // for (int l = 0; l <= n; l++)
    // {
    //     f = (pow(-1, l)) / (2 * l + 1);
    //     a = a + f;
    // }
    // p = 4 * a;
    // printf("%.10lu: %+10.8lf\n",n, p);

}
