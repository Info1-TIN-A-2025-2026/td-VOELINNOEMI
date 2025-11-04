#include <stdio.h>

int main(int argc, const char *argv[])
{
    // const int I_MIN = 10;
    // const int I_MAX = 20;
    // int i = 0;
    // do
    // {
    //     int ret = 0;
    //     printf("Enter an integrer value [%d...%d]:", I_MIN, I_MAX);
    //     ret = scanf("%d", &i);
    //     if (ret!=1)
    //     {
    //         while (getchar() != '\n');//ou {}
    //         // char c = 0;
    //         // do
    //         // {
    //         //      c = getchar(); //vider le buffer
    //         // } while (c!= '\n');
    //     }
    // } while (i < 10 || 20 < i);
    // printf("i=%d\n", i);

    unsigned int state = 0;

    printf("Enter state(ON = 1, OFF= 2, BLINK =4):");
    scanf("%d", &state);
    switch (state) // switch on integrer only
    {
    case 1:
        printf("ON");
        break;
    case 2:
        printf("OFF");
        break;
    case 4:
        printf("BLINK");
        break;
    default:
        printf("ERROR");
        break;
    }
}