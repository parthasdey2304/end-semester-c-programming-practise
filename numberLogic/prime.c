#include <stdio.h>

int main() {
	int n, c = 0, i;
	printf("Enter a number : ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++) {
		c += (n % i == 0)? 1 : 0;
	}

	printf((c == 2)? "Prime number" : "Not Prime number");

	return 0;
}
