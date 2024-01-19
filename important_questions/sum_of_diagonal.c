#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    printf("Enter the no of rows of the matrix : ");
    scanf("%d", &n);
    
    int arr[n][n];

    printf("Enter the array elements : ");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);

            if(i == j) { // adding the value of the left diagonal elements
                sum += arr[i][j];
            }
        }
    }

    // this loop is to get the right diagonal matrix elements
    j = 0;
    for(i = n-1; i >= 0; i--) {
        sum += arr[j][i];
        j++;
    }

    printf("\nThe Original matrix is : \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of the elements of the left diagonal matrix is : %d", sum);

    return 0;
}