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
		if(arr[i] > max) {
			max = arr[i];
		}
	}

        printf("The maximum element of the array elements is : %d", max);

        return 0;
}
