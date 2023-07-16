#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SEATS 10 // Maximum number of seats in the flight

struct passenger {
    char name[50];
    int seatNum;
    int isBooked;
} passengers[MAX_SEATS];

void displayTicket(int seatNum)
{
    printf("\nTicket for seat %d:\n", seatNum);
    if (passengers[seatNum - 1].isBooked == 0) {
        printf("This seat is not booked.\n");
    } else {
        printf("Name: %s\n", passengers[seatNum - 1].name);
        printf("Seat number: %d\n", passengers[seatNum - 1].seatNum);
    }
}

int main()
{
    // Code to simulate some bookings being made
    strcpy(passengers[1].name, "John Smith");
    passengers[1].seatNum = 2;
    passengers[1].isBooked = 1;

    strcpy(passengers[4].name, "Jane Doe");
    passengers[4].seatNum = 5;
    passengers[4].isBooked = 1;

    // Display tickets for some seats
    displayTicket(2);
    displayTicket(5);

    return 0;
}

