#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    int A[10][10];

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        printf("The matrix is Symmetric.");
    else
        printf("The matrix is Not Symmetric.");

    return 0;
}