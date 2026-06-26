#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], temp;
    int choice, i, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("\n===== MENU =====\n");
    printf("1. Find String Length\n");
    printf("2. Reverse String\n");
    printf("3. Convert to Uppercase\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of String = %d", strlen(str));
            break;

        case 2:
            len = strlen(str);
            for(i = 0; i < len / 2; i++)
            {
                temp = str[i];
                str[i] = str[len - i - 1];
                str[len - i - 1] = temp;
            }
            printf("Reversed String = %s", str);
            break;

        case 3:
            for(i = 0; str[i] != '\0'; i++)
            {
                str[i] = toupper(str[i]);
            }
            printf("Uppercase String = %s", str);
            break;

        case 4:
            printf("Program Exited.");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}