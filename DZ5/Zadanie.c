#include <stdio.h>
#include <locale.h>
#include <math.h> 

double zadanie(double x, double y);

int main(void)
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    double x, y;
    double result;

    printf("Вычисление функции F(x, y):\n");

    printf("x = ");
    scanf("%lf", &x);
    printf("y = ");
    scanf("%lf", &y);

    result = zadanie(x, y);

    printf("\nРезультат вычисления: ");
    printf("F(%.4f, %.4f) = %.6f\n", x, y, result);

    return 0;
}

double zadanie(double x, double y)
{
    double chisl, znam;

    chisl = 2.33 * log(sqrt(1.0 + pow(cos(x), 2)));
    znam = exp(y) + pow(sin(x), 2);

    return chisl / znam;
}
