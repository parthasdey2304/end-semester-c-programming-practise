#include <stdio.h>

int main() {
	int arr[10], i, min, max;
	printf("Enter the 10 array elements : \n");
	for(i = 0; i < 10; i++) {
		printf("Element no %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	max = arr[0]; min = arr[0];

	for(i = 0; i < 10; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}

		if(min > arr[i]) {
			min = arr[i];
		}
	}

	printf("The greatest number is : %d\n The smallest number is : %d", max, min);

	return 0;
}
