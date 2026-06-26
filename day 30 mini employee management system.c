#include <stdio.h>

int main()
{
    int id[100], salary[100], n, i;
    char name[100][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", id[i], name[i], salary[i]);
    }

    return 0;
}