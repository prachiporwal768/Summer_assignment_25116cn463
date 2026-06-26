#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p;
    int choice;

    printf("===== INVENTORY MANAGEMENT SYSTEM =====\n");
    printf("1. Add Product\n");
    printf("2. Display Product\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Product ID: ");
            scanf("%d", &p.id);

            printf("Enter Product Name: ");
            scanf("%s", p.name);

            printf("Enter Quantity: ");
            scanf("%d", &p.quantity);

            printf("Enter Price: ");
            scanf("%f", &p.price);

            printf("\nProduct Added Successfully!\n");
            break;

        case 2:
            printf("\n----- Product Details -----\n");
            printf("Product ID : %d\n", p.id);
            printf("Product Name : %s\n", p.name);
            printf("Quantity : %d\n", p.quantity);
            printf("Price : %.2f\n", p.price);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}