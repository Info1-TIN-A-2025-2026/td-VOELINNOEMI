#include <stdio.h> //printf/ scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	unsigned char num_students = 23, num_chairs = 32;
	short delta = num_students - num_chairs;
	bool sw1 = true; 
	bool sw2 = true;
	unsigned char state = (sw2 << 4) + sw1;

	/*printf
	/arg 1: format => string
	/ => combinaison "x=%d format base 10 (signed), base 10 unsigned %u"
		=> %hd (short) base 10 signed short
	*/
		
	printf("Number of students = %u, Number of chairs = %u \n", num_students, num_chairs); 
	printf("delta = %hd \n", delta); 
	printf("sw1 = %d \n", sw1); 
	printf("sw2 = %d \n", sw2);

	printf("state = %x (base 16) \n", state);
	printf("state = %d (base 10) \n", state);
	printf("state = %o (base 8) \n", state);

	char a = 'A'; // ASCII code of 'A'= 65
	printf("a = %d \n", a); // a=65
	printf("a = %c \n", a); //a = 'A'

	char b = 112; // ASCII code p
	printf("b = %c \n", b); 
	return 0;
}