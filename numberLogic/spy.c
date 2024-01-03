#include <stdio.h>

int main() {
	int n, last_digit, sum = 0, product = 1;
	printf("Enter a number : ");
	scanf("%d", &n);

	while(n != 0) {
		last_digit = n % 10;
		sum += last_digit;
		product *= last_digit;
		n /= 10;
	}

	printf((sum == product)? "Spy number" : "Not Spy number");

	return 0;
}
