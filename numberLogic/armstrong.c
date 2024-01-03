#include <stdio.h>
#include <math.h>

int main() {
	int n, sum = 0, last_digit, copy, c = 0, n_copy;
	printf("Enter a number : ");
	scanf("%d", &n);
	copy = n;
	n_copy = n;

	while(n_copy != 0) {
		c++;
		n_copy /= 10;
	}

	while(n != 0) {
		last_digit = n % 10;
		sum += pow(last_digit, c);
		n /= 10;
	}

	printf((sum == copy)? "Armstrong number" : "Not Armstrong number");

	return 0;
}
