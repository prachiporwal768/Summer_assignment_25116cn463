#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100];
    int i = 0, start = 0;
    int maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest Word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}