#include<stdio.h>
#include <stdlib.h>

int verificarMaior(int num1, int num2);

int main (void){
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d eh o maior\n", verificarMaior(verificarMaior(a, b), c));
    return 0;
}

int verificarMaior(int num1, int num2){
    return (num1 + num2 + abs(num1 - num2))/2;
}
