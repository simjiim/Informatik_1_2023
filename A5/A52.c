#define _CRT_SECURE_NO_WARNINGS //BENUTZE DIE ERSTEN 3 ZEILEN NIEMALS IN PRODUCTION CODE
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int len=40, i; //definition, wie viele Zeichen eingelesen werden sollen
    char zeichenkette[41];   //Erstellung des Arrays (Die Länge ist zwar mit einer Variable angegeben, der Compiler ersetzt diese, da konstant (inclusive der Addition), durch einen konstanten Wert, weshal es hier erlaubt ist eine Variable zur initialisierung zu nutzen)
    zeichenkette[len]='\0'; //Ob es notwendig ist, sei mal dahingestellt, aber es sorgt für die Nullterminierung
    for (i=0; i<len; i++){
        zeichenkette[i]=getchar();  //jeder Character wird einzeln eingelesen und abgespeichert
        if(zeichenkette[i]=='\n'){  //sollten wir auf einen Zeilenumbruch treffen, wird das Einlesen beendet
            zeichenkette[i+1]='\0'; //Ob es notwendig ist, sei mal dahingestellt, aber es sorgt für die Nullterminierung
            break;  //beendet die Schleife
        }
    }
    printf("%s", zeichenkette); //Gibt die Zeichenkette aus
};
