#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "simple_draw.h"		// Deklarationen der Zeichenfunktionen


int count_loops(double Re, double Im)
{
    double Z_re = 0;
    double Z_im = 0;
    double Z_im_new;
    int n;

    for (n = 0; n < 100; n++)
    {
        Z_im_new = 2 * Z_re * Z_im + Im;
        Z_re = Z_re * Z_re - Z_im * Z_im + Re;
        Z_im = Z_im_new;
        if ((Z_re * Z_re + Z_im * Z_im) > 9)
        {
            break;
        }
    }
    return n;
}


//---------- Hauptprogramm ----------

int main()
{
    double Re_0=0, Im_0=0, zoom=0, Re, Im, B;
    int N;
    ClearGraphic();


    printf("Realteil:");
    scanf("%lf", &Re_0);
    printf("imaginaerteil:");
    scanf("%lf", &Im_0);
    printf("Vergroesserung:");
    scanf("%lf", &zoom);

    for (int y = 0; y < 500; y++)
    {
        for (int x = 0; x < 700; x++)
        {
            Re = Re_0 + (x - 350) / (zoom * 200);
            Im = Im_0 - (y - 250) / (zoom * 200);
            N = count_loops(Re, Im);
            B = sqrt(N);
            DrawPixel(x, y, B * 25.6, B * 25.6, 250 - B * 25);
        }
    }

    return 0;
}
