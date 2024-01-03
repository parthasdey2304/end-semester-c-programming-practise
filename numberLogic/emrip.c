#include <stdio.h>

int primeCheck(int n) {
	int c = 0, i;

	for(i = 1; i <= n; i++) {
		c += (n % i == 0)? 1 : 0;
	}

	return c == 2;
}

int reverse(int n) {
	int reverse = 0;

	while(n != 0) {
		reverse = reverse * 10 + n % 10;
		n /= 10;
	}

	return reverse;
}

int main() {
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);

	printf((primeCheck(n) == 1 && primeCheck(reverse(n)) == 1)? "Emrip number" : "Not Emrip number");

	return 0;
}
