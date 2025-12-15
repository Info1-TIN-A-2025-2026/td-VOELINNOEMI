#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_CELLS 1000
#define min (-100) //parentheses pour les valeurs negatives
#define max  100


#define CANDIDATE_VALUE 93
int main(int argc, const char *argv[])
{
	srand(0);
	long t[NUM_CELLS] = {0};
	for (unsigned long i = 0; i < NUM_CELLS; i++)
	{
		t[i] = rand()%(max - min + 1) +min;
	}

	for(unsigned long i = 0; i < NUM_CELLS; i++)
	{
		if(CANDIDATE_VALUE == t[i])
		{
			printf("%d found position %lu\n", CANDIDATE_VALUE, i);
			return 0;
		}
	}
	
}

