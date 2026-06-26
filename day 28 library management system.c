#include <stdio.h>
#include <string.h>

struct Library
{
    int id;
    char title[50];
    char author[50];
    int issued; // 0 = Available, 1 = Issued
};

int main()
{
    struct Library book[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &book[n].id);

            getchar();

            printf("Enter Book Title: ");
            fgets(book[n].title, sizeof(book[n].title), stdin);
            book[n].title[strcspn(book[n].title, "\n")] = 0;

            printf("Enter Author Name: ");
            fgets(book[n].author, sizeof(book[n].author), stdin);
            book[n].author[strcspn(book[n].author, "\n")] = 0;

            book[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\n--- Book List ---\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("ID: %d\n", book[i].id);
                    printf("Title: %s\n", book[i].title);
                    printf("Author: %s\n", book[i].author);
                    printf("Status: %s\n", book[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    printf("\nBook Found\n");
                    printf("ID: %d\n", book[i].id);
                    printf("Title: %s\n", book[i].title);
                    printf("Author: %s\n", book[i].author);
                    printf("Status: %s\n", book[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    found = 1;
                    if (book[i].issued == 0)
                    {
                        book[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (book[i].id == id)
                {
                    found = 1;
                    if (book[i].issued == 1)
                    {
                        book[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    else
                    {
                        printf("Book is already available.\n");
                    }
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");

            break;

        case 6:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}