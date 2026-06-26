#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n===== MENU =====\n");
    printf("1. Display Array\n");
    printf("2. Find Maximum\n");
    printf("3. Find Minimum\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 2:
            max = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] > max)
                    max = arr[i];
            }
            printf("Maximum Element = %d", max);
            break;

        case 3:
            min = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] < min)
                    min = arr[i];
            }
            printf("Minimum Element = %d", min);
            break;

        case 4:
            printf("Program Exited.");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}