#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the length of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array elements : ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    printf("The largest element of the array is : %d.\n", max);

    return 0;
}