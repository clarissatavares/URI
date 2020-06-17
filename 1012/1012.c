#include<stdio.h>
/*Foram declaradas as funções que serão usadas*/
double calcularTriangulo(double base, double altura);
double calcularCirculo(double raio);
double calcularTrapezio(double baseA, double baseB, double altura);
double calcularQuadrado(double lado);
double calcularRetangulo(double ladoA, double ladoB);

int main (void){
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", calcularTriangulo(a, c));
    printf("CIRCULO: %.3lf\n", calcularCirculo(c));
    printf("TRAPEZIO: %.3lf\n", calcularTrapezio(a, b, c));
    printf("QUADRADO: %.3lf\n", calcularQuadrado(b));
    printf("RETANGULO: %.3lf\n", calcularRetangulo(a, b));

    return 0;
}

double calcularTriangulo(double base, double altura){
    return (base * altura)/2;
}

double calcularCirculo(double raio){
    double pi = 3.14159;
    return (pi * raio * raio);
}

double calcularTrapezio(double baseA, double baseB, double altura){
    return(((baseA+baseB)*altura)/2);
}

double calcularQuadrado(double lado){
    return(lado * lado);
}

double calcularRetangulo(double ladoA, double ladoB){
    return (ladoA * ladoB);
}
