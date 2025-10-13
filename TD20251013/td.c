#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

int main(int argc, const char *argv[])
{
	int d1 = 0, d2 = 0, x= 0;
	double S0 = 0; //prix de l'action
	long C = 0; // call price
	long K = 0; //strike price 
    short T = 0; //time duration
    int const s = 0.274, r = 0.015; // volatility and taux interets
	double const a1 = 0.319381530, a2 = -0.356563782, a3 = 1.781477937, a4 = -1.821255978, a5 = 1.330274429;
	int k = 1 / (1 + 0.2316419 * x);

    // calculations
	T = T / 365;// Duration Calcul (Days => Years)
    d1 = (1 / (s * (sqrt(T)))) * ((log(S0 / K) + (T + 1 / 2 * pow(s, 2)) * T));
    d2 = d1 - s * sqrt(T);
    C = S0 * N1 - K * e(exp - r, T) * N2; // Inclure ici N1 & N2
	n(x) = exp (-pow(x,2)/ 2) / sqrt(2 * M_PI);

    // fonction pour avoir le N(d1)
    if (d1 >= 0)
    {
        N1 = 1 – n(x)*(a1 * k + a2 * pow(k, 2) + a3 * pow(k, 3) + a4 * pow(k, 4) + a5 * pow(k, 5));
    }
    if else (d1 < 0)
	{
		N1 = 1 – N1;
	}
	// fonction pour avoir le N(d2)
    if (d2 >= 0)
    {
        N2 = 1 – n(x)*(a1 * k + a2 * pow(k, 2) + a3 * pow(k, 3) + a4 * pow(k, 4) + a5 * pow(k, 5));
    }
    if else (d2 < 0)
	{
		N2 = 1 – N2;
	}


	return 0;
}