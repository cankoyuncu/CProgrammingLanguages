#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Fahrenayt cinsinden sicakligi giriniz: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenayt = %.2f Celsius", fahrenheit, celsius);

    return 0;
}
