#include<stdio.h>

int main (void){
    float a;
    float b;
    float c;
    float total;
    float media;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    total = ( a * 2 ) + ( b * 3) + ( c * 5 );

    media = total/10;

    printf("MEDIA = %.1f\n", media);

    return 0;
}
