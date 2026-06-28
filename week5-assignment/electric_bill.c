/*
Description: program to calculate electric bill based on units consumed
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 19/06/2026
Version 1
*/

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    printf("Total bill: KSh %.2f\n", calculateElectricBill(units));

    return 0;
}