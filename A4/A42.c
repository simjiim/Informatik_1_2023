#include <stdio.h>
#include <math.h>

int main(){
    double p, q, p2, radiant, wurzel; //initialisierung der variablen p, q, q2

    printf("Geben Sie p und q ein!\n"); //Aufforderung des Nutzers zur Eingabe von p und q
    scanf("%lf %lf", &p, &q); //Eingabe der Werte durch den user
    p2=p/2; //Zwischenspeicherung von p/2, da der Wert mehrfach verwendet wird
    radiant=p2*p2-q;
    wurzel= sqrt(radiant);
    if(radiant==0){
        printf("Die Lösung lautet: %lf", -p2);
    } else if(radiant<0){
        printf("Es gibt keine Lösung!");
    } else{
        printf("Die lösungen lauten: %f und %f", -p2-wurzel, -p2+wurzel); //Ausgabe der Lösungen der quadratischen Gleichung
    }
    return 0;
};
