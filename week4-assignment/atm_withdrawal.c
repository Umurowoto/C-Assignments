/*
Description: ATM withdrawal program
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 14/06/2026
Version 1
*/

#include <stdio.h>

int main() {
    float balance, withdrawal_amount;

    printf("Enter your current balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter the amount to withdraw: ");
        scanf("%f", &withdrawal_amount);

        balance -= withdrawal_amount;

        printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
    }

    printf("Your balance is zero. No more withdrawals can be made.\n");
    return 0;
}

       