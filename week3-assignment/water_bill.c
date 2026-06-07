/*
Description: This program display total water bill.
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 7/06/2026
Version 1
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter water units consumed: ");
    scanf("%d", &units);

    if (units <= 30) {
        bill = units * 20;
    }
    else if (units <= 60) {
        bill = units * 25;
    }
    else {
        bill = units * 30;
    }

    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}