//Simeon Stuermer - 5494428

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x = 0, N = 0, Summe, k, Produkt;
	int i;
	printf("x und N eingeben:");
	scanf("%lf %lf", &x, &N);
	Summe = 0;
	k = 0;
	do
	{
		Produkt = 1;
		for (i = 1; i <= k; i++)
		{
			Produkt = Produkt * x / i;
		}
		Summe += Produkt;
		k++;
	} while (k<N);
	printf("Das Ergebnis ist %lf", Summe);

	return 0;
}