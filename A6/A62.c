/*
	Projekt:	Grafikausgabe mit Hilfe von "Simple Draw"
	Datei:		main.c
	Autor:      Simeon Stürmer
*/

#define _USE_MATH_DEFINES

#include <stdio.h>
#include "simple_draw.h"		// Deklarationen der Zeichenfunktionen
#include <math.h>


//---------- Hauptprogramm ----------

int main()
{
    ClearGraphic();

    int amplitude1 = 200, amplitude2 = 200, n1 = 1, n2 = 3, x, y, phi = 60;
    MoveTo(350 + amplitude1 * sin(n1 * 0 * M_PI / 180), 250 + amplitude2 * sin((n2 * 0 + phi) * M_PI / 180));
    SetPen(255, 0, 0, 3);

    for (int i = 0; i < 1000; i++)
    {
        x = 350 + amplitude1 * sin(n1 * i * M_PI / 180);
        y = 250 + amplitude2 * sin((n2 * i + phi)*M_PI/180);
        DrawTo(x, y);
    }



    return 0;
}
