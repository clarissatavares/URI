#include<stdio.h>

int main (void) {
    int number;
    int horas;
    float valor;
    float salary;

    scanf("%d", &number);
    scanf("%d", &horas);
    scanf("%f", &valor);

    salary = horas * valor;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
