#include<stdio.h>

int main ( void ) {
    double a;
    double b;
    double total;
    double media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    total = ( a * 3.5 ) + ( b * 7.5 );

    media = total / 11;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
