#include <stdio.h>

int main()
{
    float balance, amount;
    int choice;

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("\n1. Deposit Money");
    printf("\n2. Withdraw Money");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount Deposited Successfully!\n");
            printf("Current Balance = %.2f", balance);
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Withdrawal Successful!\n");
                printf("Remaining Balance = %.2f", balance);
            }
            else
            {
                printf("Insufficient Balance!");
            }
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}