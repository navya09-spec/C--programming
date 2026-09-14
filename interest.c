#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T;
    float SI, CI, amount;

    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;

    amount = P * pow(1 + R / 100, T);
    CI = amount - P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}