#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &columns);

    int arr1[rows][columns], arr2[rows][columns], sum[rows][columns];

    printf("Enter the elements of the first matrix : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // adding the two matrices and storing them in sum[][] matrix
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}