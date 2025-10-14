#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, const char *argv[])
{

    const double a1 = 0.319381530, a2 = -0.356563782, a3 = 1.781477937, a4 = -1.821255978, a5 = 1.330274429;
    const double s = 0.2747, r = 0.015; // volatility and taux interets
    double S0 = 0.0;                    // prix de l'action
    double K = 0.0;                     // strike price
    double T = 0.0;                     // time duration
    printf("Veuillez entrer le prix de l'action: \n");
    scanf("%lf", &S0);
    printf("Veuiller entrer le prix du strike \n");
    scanf("%lf", &K);
    printf("Veuillez entrer le nombre de jours jusqu'à l'expiration du contrat: \n");
    scanf("%lf", &T);

    if (S0 <= 0)
    {
        printf("Valeur impossible ! (S0 Négative/Nul)\n");
    }
    else if (K <= 0)
    {
        printf("Valeur impossible ! (K négatif/nul)\n");
    }
    else if (T <= 0)
    {
        printf("Valeur impossible (T Négatif/nul)\n");
    }
    else
    {
        T = T / 365; // Duration Calcul (Days => Years)
        double d1 = (1 / (s * (sqrt(T)))) * ((log(S0 / K) + (r + 1 / 2 * pow(s, 2)) * T));
        double d2 = d1 - s * sqrt(T);
        double k1 = 1 / (1 + 0.2316419 * d1);
        double k2 = 1 / (1 + 0.2316419 * d2);
        double n1 = exp(-pow(d1, 2) / 2) / sqrt(2 * M_PI); // n(x)
        double n2 = exp(-pow(d2, 2) / 2) / sqrt(2 * M_PI); // n(x)
        double N1 = 1 - n1 * (a1 * k1 + a2 * pow(k1, 2) + a3 * pow(k1, 3) + a4 * pow(k1, 4) + a5 * pow(k1, 5));
        double N2 = 1 - n2 * (a1 * k2 + a2 * pow(k2, 2) + a3 * pow(k2, 3) + a4 * pow(k2, 4) + a5 * pow(k2, 5));
        double C = S0 * N1 - K * exp(-r * T) * N2; // Inclure ici N1 & N2
        printf("Le prix d'action Call est: %.2lf", C);
    }
    return 0;
}