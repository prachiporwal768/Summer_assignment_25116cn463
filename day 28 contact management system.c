#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c;
    int choice;

    printf("===== Contact Management System =====\n");
    printf("1. Add Contact\n");
    printf("2. Display Contact\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    getchar(); // Clear input buffer

    switch(choice)
    {
        case 1:
            printf("Enter Name: ");
            fgets(c.name, sizeof(c.name), stdin);

            printf("Enter Phone Number: ");
            fgets(c.phone, sizeof(c.phone), stdin);

            printf("\nContact Added Successfully!\n");
            break;

        case 2:
            printf("\n--- Contact Details ---\n");
            printf("Name : %s", c.name);
            printf("Phone: %s", c.phone);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}