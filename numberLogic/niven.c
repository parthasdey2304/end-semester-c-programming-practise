#include <stdio.h>

int main() {
	int n, sum = 0, copy;
	printf("Enter a number : ");
	scanf("%d", &n);
	copy = n;

	while(n != 0) {
		sum += n % 10;
		n /= 10;
	}

	printf((copy % sum == 0)? "Niven number" : "Not Niven number");

	return 0;
}
