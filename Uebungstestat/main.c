//Simeon Stürmer 5494428

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int Zahl = 0;
	int k = 0;
	int Ziffern[20];

	printf("Umrechnung: dezimal zu dual\n");
	printf("Zahl eingeben:");
	scanf("%i", &Zahl);
	for (k = 0; k < 20; k++) {
		Ziffern[k] = Zahl % 2;
		Zahl /= 2;
		if (Zahl==0)
		{
			break;
		}
	}

	printf("ergibt dual:\n");
	while (k>=0)
	{
		printf("%i", Ziffern[k]);
		k--;
	}
}