#include <stdio.h>

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    // Initializing elements of matrix mult to 0
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiplying firstMatrix and secondMatrix and storing in result
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            for (int k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int row, int column) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

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
    printf("\nEnter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("Enter element b%d%d : ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Check if multiplication is possible
    if (columnFirst != rowSecond) {
        printf("Error! Multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
    } else {
        // Multiply the matrices
        multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

        // Display the matrices
        printf("\nFirst Matrix:\n");
        displayMatrix(firstMatrix, rowFirst, columnFirst);

        printf("\nSecond Matrix:\n");
        displayMatrix(secondMatrix, rowSecond, columnSecond);

        printf("\nResultant Matrix:\n");
        displayMatrix(result, rowFirst, columnSecond);
    }

    return 0;
}
