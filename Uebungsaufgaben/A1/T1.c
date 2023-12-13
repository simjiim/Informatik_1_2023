//
// Created by simeon on 11.12.23.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(){
    double kontostand=0, zinssatz=0;
    int jahre=0, i=0;

    printf("Geben Sie den Kontostand ein!\n");
    scanf("%lf", &kontostand);
    printf("Geben Sie den Zinssatz p.a. an! (in %%)\n");
    scanf("%lf", &zinssatz);
    printf("Wie viele Jahre sollen simuliert werden?\n");
    scanf("%i", &jahre);

    for(i=0; i<jahre; i++){
        kontostand*=(1+zinssatz/100);
        printf("Der Kontostand im Jahr %i: %lf", i+1, kontostand);
    }



};