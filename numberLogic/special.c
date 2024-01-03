#include <stdio.h>

int main() {
	int n, sum = 0, last_digit, fact = 1, i, copy;
	printf("Enter a number : ");
	scanf("%d", &n);
	copy = n;

	while(n != 0) {
		last_digit = n % 10;

		for(i = 1; i <= last_digit; i++) {
			fact *= i;
		}

		sum += fact;
		fact = 1;
		n /= 10;
	}

	printf((sum == copy)? "Special number" : "Not Special number");

	return 0;
}
