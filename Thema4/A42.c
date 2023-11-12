#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double p, q, p2; //initialisierung der variablen p, q, q2

    printf("Geben Sie p und q ein!\n"); //Aufforderung des Nutzers zur Eingabe von p und q
    scanf("%lf %lf", &p, &q); //Eingabe der Werte durch den user
    p2=p/2; //Zwischenspeicherung von p/2, da der Wert mehrfach verwendet wird
    printf("Die lösungen lauten: %f und %f", -p2-sqrt(p2*p2-q), -p2+sqrt(p2*p2-q)); //Ausgabe der Lösungen der quadratischen Gleichung
    return 0;
};
