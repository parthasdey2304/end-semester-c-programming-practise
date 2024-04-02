#include <stdio.h>

int main() {
    int rows, i, j, sum_left = 0, sum_right = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the matrix elements : ");
    int arr[rows][rows];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nThe Matrix is : \n");

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++) {
        for(j = 0; j < rows; j++) {
            if(i == j) {
                sum_left += arr[i][j];
            }
            if(i + j == rows - 1) {
                sum_right += arr[i][j];
            }
        }
    }

    printf("The sum of the left diagonal elements is : %d.\nThe sum of the right diagonal elements is : %d.\n", sum_left, sum_right);

    return 0;
}