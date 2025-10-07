#include <stdio.h> 
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	long volume = 42; //m3
	printf("volume = [%ld]\n", volume);
	printf("volume = [%7ld]\n", volume); //right justify
	printf("volume = [%-7ld]\n", volume); //left justify

	printf("volume = [%+ld]\n", volume); //rajouter le signe
	printf("volume = [%+7ld]\n", volume); //right justify
	printf("volume = [%+-7ld]\n", volume); //left justify

	long pression = -4; //bar
	printf("pression = [%ld]\n", pression);

	double pi = 3.1415126385; 
	printf("pi = [%lf]\n", pi); //arrondi a l'affichage a 6 digits
	printf("pi = [%.2lf]\n", pi); //specifie ne nombre de digit
	printf("pi = [%+.2lf]\n", pi);

	double absolut_zero = -459.67;				  // F°
	printf("zero abs = [%.1lf]\n", absolut_zero); //1 digit apres
	
	printf("[%+10.2lf]\n", pi);
	printf("[%+10.2lf]\n", absolut_zero);

	double light_speed = 299792458.0; //m/s
	printf("[%+10.2lf]\n", light_speed); //shift if too big

	int num_digits = 3; //%.3lf
	printf("pi = [%.*lf]\n", num_digits, pi); //num_digits after decimal point

	num_digits = 12; 
	printf("pi = [%.*lf]\n", num_digits, pi); //num_digits after decimal point

	int width = 8;
	num_digits = 3;
	printf("pi =[%+*.*lf]\n", width, num_digits, pi); //num-digits after decimal point
}