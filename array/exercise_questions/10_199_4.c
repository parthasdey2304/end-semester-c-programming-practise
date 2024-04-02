#include <stdio.h>
#include <stdbool.h>

int main() {
	int arr[10], i, n;
	bool flag = false;
	printf("Enter 10 numbers : \n");

	for(i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}

	printf("\nEnter the number to be searched : ");
	scanf("%d", &n);

	for(i = 0; i < 10; i++) {
		if(n == arr[i]) { 
			flag = true;
		}
	}

	printf((flag)? "The number is present" : "The number is not present");

	return 0;
}
