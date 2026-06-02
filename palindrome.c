#include <stdio.h>

int main() {
    int num, temp, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (temp == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}