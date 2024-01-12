#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    printf("Enter the elements of the matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe Original matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\nThe Transpose of the matrix is:\n");

    for (j = 0; j < columns; j++) {
        for (i = 0; i < rows; i++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
