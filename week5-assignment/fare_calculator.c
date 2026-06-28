/*
Description: program to calculate fare based on distance travelled
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 19/06/2026
Version 1
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;

    printf("Enter distance travelled (km): ");
    scanf("%f", &distance);

    printf("Total fare: KSh %.2f\n", calculateFare(distance));

    return 0;
}