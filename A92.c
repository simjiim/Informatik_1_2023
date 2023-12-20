#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int suche_text(char* text, char* suchwort) {
	int i = 0, j=1, stelle = -1;

	while (text[i] != '\0')
	{
		if (text[i]==suchwort[0])
		{
			while (suchwort[j] != '\0') {
				if (text[i + j] != suchwort[j])
				{
					break;
				}
				if (suchwort[j+1] == '\0')
				{
					stelle = i;
					return stelle;
				}
				i++;
			}
		}
		i++;
	}
	return stelle;
}

int main() {
	char text[20] = "zuege sind toll";
	char suche[10] = "sind";
	printf("%d", suche_text(text, suche));
}