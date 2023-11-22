#include <stdlib.h>
#include <stdio.h>

int main(){
    unsigned char c;

    printf("%o\n", 10);
    printf("%d\n", 010);
    printf("%x\n", 030);
    printf("%i\n", 7/2);
    printf("%d\n", c=1.7);
    printf("%d\n", c==1.7);
    c -= 2;
    printf("%d\n", c);
}