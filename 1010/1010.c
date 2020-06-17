#include<stdio.h>

int main (void){
    int cod1, cod2, unid1, unid2;
    float compra1, compra2, preco1, preco2, total;

    scanf("%d %d %f", &cod1, &unid1, &preco1);
    scanf("%d %d %f", &cod2, &unid2, &preco2);

    compra1 = unid1 * preco1;
    compra2 = unid2 * preco2;
    total = compra1 + compra2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
