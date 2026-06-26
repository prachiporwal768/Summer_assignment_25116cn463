#include <stdio.h>

int main()
{
    int id[100], n, i;
    char title[100][50], author[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &id[i]);

        printf("Enter Book Title: ");
        scanf("%s", title[i]);

        printf("Enter Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n----- Library Records -----\n");
    printf("ID\tTitle\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\n", id[i], title[i], author[i]);
    }

    return 0;
}