/*
	Projekt:	Grafikausgabe mit Hilfe von "Simple Draw"
	Datei:		main.c
	Autor:		Simeon Stürmer
*/

#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>

#include <stdio.h>
#include "simple_draw.h"		// Deklarationen der Zeichenfunktionen



int max(int x, int y) {
    return x > y ? x : y;
}

//---------- Hauptprogramm ----------

int main()
{
    int x_m = 75, y_m = 75, radius = 50, rad_x = 0, rad_y = 0, x, y, i;
    printf("Geben Sie X_M und Y_M ein!");
    scanf("%i%i", &x_m, &y_m);

    printf("Geben Sie einen Radius für X und Y ein!");
    scanf("%i%i", &rad_x, &rad_y);

    x_m = max(rad_x, rad_y) + 50;
    y_m = x_m;

    ClearGraphic();
    SetPen(255, 0, 0, 2);
    MoveTo(x_m + rad_x * cos(0), y_m + rad_y * sin(0));
    for (i = 1; i < 360; i++)
    {
        x = x_m + rad_x * cos(i * M_PI / 180);
        y = y_m - rad_y * sin(i * M_PI / 180);
        DrawTo(x, y);
    }


    return 0;
}
