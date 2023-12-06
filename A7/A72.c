//
// Created by simeon on 06.12.23.
//
#define MAX_VALUES 100 // max. Anzahl der Messwerte
#include <stdio.h>
double measurement[MAX_VALUES]; // globale Feldvariable

int read_values(void); // Rückgabewert: Anzahl der Messwerte
double mean(int N); // Parameter: Anzahl der Messwerte
double min(int N);
double max(int N);

int messwerteErfassen(int N){
    int anzahl;
    int i;
    printf("Wie viele Werte moechten Sie eingeben?\n");
    scanf("%i", &anzahl);
    if(anzahl+N>=MAX_VALUES){
        printf("Die Eingegebene Anzahl ist groesser als erlaubt! (Max: %i)\n", MAX_VALUES);
        return 0;
    }
    for (i = 0; i < anzahl; i++) {
        scanf("%lf", &measurement[N]);
        N++;
    }
    return N;
}

double mean(int N){
    int i;
    double sum=0;
    for(i=0; i<N; i++){
        sum+=measurement[i];
    }
    return sum/N;
}

double min(int N){
    double min = measurement[0];
    int i;
    for(i=0; i<N; i++){
        if(min>measurement[i]){
            min=measurement[i];
        }
    }
    return min;
}

double max(int N){
    double max = measurement[0];
    int i;
    for(i=0; i<N; i++){
        if(max<measurement[i]){
            max=measurement[i];
        }
    }
    return max;
}

void printMenue(){
    printf("Messertanalyse\n===============\n\n");
    printf("Menue:\n");
    printf("1 - Messwerte eingeben\n");
    printf("2 - Mittelwert berechnen\n");
    printf("3 - Maximum und Minimum ermitteln\n");
    printf("0 - Programm beenden\n");
}

int main(){
    int eingabe = 5;
    int N=0;
    while(1){
        printMenue();
        scanf("%i", &eingabe);
        if(eingabe==0){
            break;
        }
        switch (eingabe) {
            case 1:
                N= messwerteErfassen(N);
                break;
            case 2:
                printf("Mittelwert:%lf\n\n", mean(N));
                break;
            case 3:
                printf("Min:%lf, Max:%lf\n\n", min(N), max(N));
                break;
        }
    }
    return 0;
}