#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i, j, k = 0, found;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    
    for(i = 0; i < n1; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(a[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
            c[k++] = a[i];
    }

    
    for(i = 0; i < n2; i++)
    {
        found = 0;
        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                found = 1;
                break;
            }
        }
        if(found == 0)
            c[k++] = b[i];
    }

    printf("Union of the arrays:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}