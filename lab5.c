#include <stdio.h>
#include <math.h>

int main() {
    const double d = 1.0;
    double x, y, F;

    printf("Введите x и y: ");
    scanf("%lf %lf", &x, &y);

    F = (pow(cos(y), 3) + pow(2, x) * d) / (exp(y) + log(pow(sin(x), 2) + 7.4));

    printf("F(x, y) = %.6f\n", F);

    return 0;
}