#include <stdio.h>

int main() {
    printf("===== TEMPERATURE CONVERSION (F to C) =====\n");

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }

    printf("===== TEMPERATURE CONVERSION (C to F) =====\n");

    lower = -20;
    upper = 150;
    step = 10;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0 * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
}