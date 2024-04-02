#include <stdio.h>

int main() {
        int n, i, min;
        printf("Enter the length of the array : ");
        scanf("%d", &n);

        int arr[n];

        printf("Enter the array elements : ");
        for(i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }

        min = arr[0];

        for(i = 0; i < n; i++) {
                if(arr[i] < min) {
                        min = arr[i];
                }
        }

        printf("The minimum element of the array elements is : %d", min);

        return 0;
}
