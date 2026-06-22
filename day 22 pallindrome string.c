
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a Palindrome.");
    else
        printf("The string is Not a Palindrome.");

    return 0;
}