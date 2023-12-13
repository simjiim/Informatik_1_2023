#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int ggt(z1, z2) {
	if (z2 == 0)
		return z1;
	else
	{
		return ggt(z2, z1 % z2);
	}
}

int main() {
	int z1=0, z2=0;
	scanf("%i%i", &z1, &z2);
	printf("%i", ggt(z1, z2));
	return 0;
}