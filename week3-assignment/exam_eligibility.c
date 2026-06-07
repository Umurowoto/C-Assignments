/*
Description: This program displays eligibility for final exams.
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 7/06/2026
Version 1
*/

#include <stdio.h>

int main() {
    float attendance, averageMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    if (attendance >= 75 && averageMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}