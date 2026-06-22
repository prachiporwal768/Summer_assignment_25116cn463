#include <stdio.h>

int main() {
    int rows, cols;
    int A[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Row-wise Sum:\n");

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum = sum + A[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, sum);
    }

    return 0;
}