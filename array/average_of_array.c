#include <stdio.h>

int main() {
        int n, i, sum = 0;
        printf("Enter the length of the array : ");
        scanf("%d", &n);

        int arr[n];

        printf("Enter the array elements : ");
        for(i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
                sum += arr[i];
        }

        printf("The average of the array elements is : %d", sum/n);

        return 0;
}
