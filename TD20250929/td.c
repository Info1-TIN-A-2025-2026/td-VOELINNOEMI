#include <stdio.h>

int main(int argc, const char *argv[])
{
	int s = 0; 
	unsigned int hours = 0, minutes = 0, seconds = 0;
	printf("Number of seconds: ");
	scanf("%d", &s);
	hours = s/3600;
	minutes = s/60 - hours * 60;
	seconds = s - minutes * 60 - hours * 3600;
		if (s < 0)
		{
			printf("ERROR\n"); 
		}
		else if (s >= 8400)
		{
			printf("OVERFLOW\n");
		}
		else
		{
		printf("%02u:%02u:%02u", hours, minutes, seconds); 
		}
}