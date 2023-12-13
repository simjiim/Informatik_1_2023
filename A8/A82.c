#include <stdio.h>

int fib(int n){
    if(n<=1){
        return n;
    } else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n=0;
    printf("Geben Sie an, welche Fibonacci-Zahl Sie haben wollen!\n");
    scanf("%i", &n);
    printf("Die %i'te Fibonacci-Zahl lautet: %i\n", n, fib(n));
}