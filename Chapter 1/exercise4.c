#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;
    printf("Celsius Fahrenheit\n");
    while (fahr <= upper)
    {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f %12.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}