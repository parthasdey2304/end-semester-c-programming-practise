#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &n);

	while(n > 7) {
		while(n != 0) {
			sum += n % 10;
			n /= 10;
		}

		n = sum;
		sum = 0;
	}

	printf((n == 1)? "Magic number" : "Not Magic number");

	return 0;
}
