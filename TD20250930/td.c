#include <stdio.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	double m1=0, m2=0, d=0, F ; 
	printf("Entrez la masse de votre objet 1 (en kg avec la notation scientifique): ");
	scanf("%lf", &m1);
	printf("Entrez la masse de votre objet 2 (en kg avec la notation scientifique): ");
	scanf("%lf", &m2);
	printf("Entrez la distance entre les deux objets (en km avec la notation scientifique) : ");
	scanf("%lf", &d);

	double const G = 6.67e-11;
	
		if (d == 0)
		{
		printf("ERROR: Division par 0\n");
		}
		else if (m1 <= 0 || m2 <= 0 || d <= 0)
		{
		printf("ERROR: valeur negative\n");
		}
		else
		{
		F = G * m1 * m2 / pow(d, 2);
		printf("La force d'attraction des deux objets est: %.3lf N \n", F); 
		}

}