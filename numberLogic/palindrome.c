#include <stdio.h>

int main() {
	int n, rev = 0, copy;
	printf("Enter a number : ");
	scanf("%d", &n);
	copy = n;

	while(n != 0) {
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	printf((rev == copy)? "Palindrome number" : "Not Palindrome number");

	return 0;
}
