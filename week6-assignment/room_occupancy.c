/*
Description: Program to display number of occupied and vacant rooms per floor(2D array)
Name: umuro woto
Reg NO: BCS-03-0083/2026
Date; 27/06/2026
Version 1
*/
#include <stdio.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d\n", floor + 1);

        for (room = 0; room < 10; room++) {
            printf("Room %d (1=Occupied, 0=Vacant):/n ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    printf("ROOM STATUS PER FLOOR\n");

    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               floor + 1, occupied, vacant);
    }

    return 0;
}