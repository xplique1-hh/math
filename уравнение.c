#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    double x, y, f;
    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);
    f = (1.0 + pow(sin(x + y), 2)) / (2.0 + fabs(x - (2.0 * x) / (1.0 + x * x * y * y))) + x;
    printf("\nРезультат вычислений:\n");
    printf("F(%.4lf, %.4lf) = %.6lf\n", x, y, f);

    return 0;
}