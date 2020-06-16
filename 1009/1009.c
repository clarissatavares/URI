#include<stdio.h>

int main ( void ) {
    char nome[50];
    double salario;
    double vendas;
    double total;

    scanf("%s", nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    total = (vendas * 0.15) + salario;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
