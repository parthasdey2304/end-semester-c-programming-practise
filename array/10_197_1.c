#include <stdio.h>

int main() {
	int arr[20], i, sum = 0;;
	printf("Enter 20 numbers : \n");
	for(i = 0; i < 20; i++) {
		printf("No %d : ", i + 1);
		scanf("%d", &arr[i]);
		sum += (arr[i] % 3 == 0 || arr[i] % 5 == 0)? arr[i] : 0;
	}

	printf("The Sum of the numbers divisible by 3 or 5 is : %d.", sum);

	return 0;
}
