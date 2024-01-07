#include <stdio.h>

int main() {
	int arr[20], i, even = 0, odd = 0, multiple_of_4 = 0;
	
	printf("Enter 20 elements of the array : ");

	for(i = 0; i < 20; i++) {
		scanf("%d", &arr[i]);

		if(arr[i] % 2 == 0)
			even += 1;
		if(arr[i] % 2 != 0)
			odd += 1;
		if(arr[i] % 4 == 0)
			multiple_of_4 += 1;
	}

	printf("The number of even number are : %d\nThe number of odd numbers are : %d.\nThe no of multiples of 4 are : %d.\n", even, odd, multiple_of_4);

	return 0;
}
