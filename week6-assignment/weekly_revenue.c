/*
Description: program to calculate total and average revenue for a week(1D array)
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 27/06/2026
Version 1
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    printf("Enter revenue for 7 days:\n");

    for(i = 0; i < 7; i++) {
        scanf("%f", &revenue[i]);
        total = total + revenue[i];
    }

    average = total / 7;

    printf("Total Revenue = %.2f\n", total);
    printf("Average Revenue = %.2f\n", average);

    return 0;
}