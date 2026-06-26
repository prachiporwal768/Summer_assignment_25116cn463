#include <stdio.h>

int main()
{
    int choice, tickets = 50, book, cancel;

    printf("===== Ticket Booking System =====\n");
    printf("1. Book Ticket\n");
    printf("2. Cancel Ticket\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Available Tickets: %d\n", tickets);
            printf("Enter number of tickets to book: ");
            scanf("%d", &book);

            if(book <= tickets)
            {
                tickets = tickets - book;
                printf("Booking Successful!\n");
                printf("Remaining Tickets: %d\n", tickets);
            }
            else
            {
                printf("Not enough tickets available!\n");
            }
            break;

        case 2:
            printf("Enter number of tickets to cancel: ");
            scanf("%d", &cancel);

            tickets = tickets + cancel;
            printf("Ticket Cancelled Successfully!\n");
            printf("Available Tickets: %d\n", tickets);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}