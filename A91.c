#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int countSpaces(char* zeichenkette) {
	int i = 0;
	int leer = 0;
	while (zeichenkette[i] != '\0')
	{
		if (zeichenkette[i] == ' ')
		{
			leer++;
		}
		i++;
	}
	return leer;
}

int main() {
	char zeichenkette[15] = "ich mag Zuege";
	printf("%i", countSpaces(zeichenkette));
}