//Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, size;

    lower = 0;
    upper = 300;
    size = 20;

    printf("Celsius into Fahrenheit");
    celsius = lower;
    while (celsius <= upper)
    {
        /* code */
        fahr = (9.0 * celsius) / 5.0 + 32;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius += size;
    }
    
    return 0;
}