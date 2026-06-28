/*
Description: program to convert Fahrenheit to Celsius
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 19/06/2026
Version 1
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Temperature in Celsius: %.2f °C\n",
           convertToCelsius(fahrenheit));

    return 0;
}