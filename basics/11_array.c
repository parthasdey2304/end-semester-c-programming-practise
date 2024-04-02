#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	
	printf("The numbers in the array is : ");

	for(int i = 0; i < 5; i++) {
		printf("%d, ", arr[i]);
	}
	return 0;
}
