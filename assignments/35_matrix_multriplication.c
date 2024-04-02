#include <stdio.h>

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int rowFirst, columnFirst, rowSecond, columnSecond;

    // Input for the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // Check if multiplication is possible
    if (columnFirst != rowSecond) {
        printf("Error! Multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
    } else {
        printf("Enter elements for the second matrix:\n");
        for (int i = 0; i < rowSecond; ++i) {
            for (int j = 0; j < columnSecond; ++j) {
                printf("Enter element b%d%d : ", i + 1, j + 1);
                scanf("%d", &secondMatrix[i][j]);
            }
        }

        // Initialize elements of result matrix to 0
        for (int i = 0; i < rowFirst; ++i) {
            for (int j = 0; j < columnSecond; ++j) {
                result[i][j] = 0;
            }
        }

        // Multiply the two matrices
        for (int i = 0; i < rowFirst; ++i) {
            for (int j = 0; j < columnSecond; ++j) {
                for (int k = 0; k < columnFirst; ++k) {
                    result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        // Display the original matrices
        printf("\nFirst Matrix:\n");
        for (int i = 0; i < rowFirst; ++i) {
            for (int j = 0; j < columnFirst; ++j) {
                printf("%d\t", firstMatrix[i][j]);
            }
            printf("\n");
        }

        printf("\nSecond Matrix:\n");
        for (int i = 0; i < rowSecond; ++i) {
            for (int j = 0; j < columnSecond; ++j) {
                printf("%d\t", secondMatrix[i][j]);
            }
            printf("\n");
        }

        // Display the result matrix
        printf("\nResultant Matrix:\n");
        for (int i = 0; i < rowFirst; ++i) {
            for (int j = 0; j < columnSecond; ++j) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
