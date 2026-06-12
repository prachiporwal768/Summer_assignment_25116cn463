#include <stdio.h>

int palindrome(int n) {
    int rev = 0, temp = n, rem;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (rev == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is not a Palindrome\n", num);

    return 0;
}