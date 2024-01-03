#include <stdio.h>

int main() {
	int n, i, copy, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &n);
	copy = n;

	for(i = 1; i < n; i++) {
		sum += (n % i == 0)? i : 0;
	}

	printf((copy == sum)? "Perfect number" : "Not Perfect number");

	return 0;
}
