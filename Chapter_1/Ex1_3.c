//Program for fahreneit into celsius

// #include<stdio.h>

// int main()
// {
//     float fahr, celsius;
//     int lower, upper, step;

//     lower = 0;
//     upper = 1000;
//     step = 20;

//     fahr = lower;
//     while(fahr <= upper){
//         celsius = (5.0/9.0) * (fahr - 32);
//         //celsius = 5 * (fahr - 32) / 9;
//         printf("%4.0f\t%6.2f\n", fahr, celsius);        //%4d is used to right justify the numbers and to print 4 numbers 
//         fahr += step;                               //  %4.2 means to print 4 numbers with 2 numbers after decimal
//     }

//     //return 0;
// }


//Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius to Fahrenheit\n");
    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32);
        //celsius = 5 * (fahr - 32) / 9;
        printf("%4.0f\t%6.2f\n", fahr, celsius);        //%4d is used to right justify the numbers and to print 4 numbers 
        fahr += step;                               //  %4.2 means to print 4 numbers with 2 numbers after decimal
    }

    //return 0;
}