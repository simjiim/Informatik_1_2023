#define _CRT_SECURE_NO_WARNINGS //BENUTZE DIE ERSTEN 3 ZEILEN NIEMALS IN PRODUCTION CODE
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int umgerechnet; //Variablen definition
    int input;
    int potenz;
    int remainder;
    int fuerendeNull;

    while (1){  //Endlosschleife
        potenz = 128;   //Startwert für die Division
        fuerendeNull=1; //"boolsche"-Variable zur detektierung führender Nullen (siehe unten)

        printf("Bitte geben Sie die zu konvertierende Zahl ein! (Abbruch mit der -1)\n");
        scanf("%i", &input);
        if(input < 0 || input > 255){ //Abfrage, ob input außerhalb des Wertebereichs liegt
            if(input==-1){  //Wenn input == -1 wird das Programm Beendet
                return 0;
            } else{
                printf("Die Angegebene Zahl liegt nicht im Wertebereich!\n");   //Anderenfalls wird eine Fehlermeldung ausgegeben
            }
        } else{
            remainder=input;    //Rest wird auf den input gesetzt -> nicht notwendiger Schritt (zur besseren Lesbarkeit der Variablen/speicherung des Eingabewertes)

            for (int i = 7; i >= 0; i--) {  //Da wir nur bis zur 7. Potenz von 2 betrachten, gibt es 7 Schleifendurchläufe
                umgerechnet=remainder/(potenz); //Das Ergebnis der entsprechenden 2er-Potenz
                remainder=remainder % (potenz); //Der Rest, mit dem wir die restlichen berechnen
                potenz/=2;  //Verminderung der Potenz für den nächsten Schleifendurchlauf
                if(fuerendeNull && !umgerechnet){   //Wenn führende Null, wird nichts ausgegeben

                } else{
                    printf("%i", umgerechnet);  //Wenn keine führende Null existiert, wird die Zahl zeichen für Zeichen ausgegeben
                    fuerendeNull=0; //die Variable wird auf 0 gesetzt, damit folgende Nullen, auch als diese ausgegeben werden
                }
            }
            printf("\n");   //New Line, am Ende jeder Binärzahl
        }

    }
    return 0;
};
