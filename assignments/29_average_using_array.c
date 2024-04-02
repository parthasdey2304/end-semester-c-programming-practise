#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter the length of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements : ");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The average of the array elements is : %d.\n", sum / n);
    return 0;
}