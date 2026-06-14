/*
Description: Password validation system
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 14/06/2026
Version 1
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter your password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Please try again.\n");
        }
    } while (password != 1234);

    printf("Access granted.\n");
    return 0;
}