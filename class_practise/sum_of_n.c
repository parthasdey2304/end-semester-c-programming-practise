#include <stdio.h>

int Sum(int n) {
	if(n == 0) {
		return 0;
	}

	else {
		return n + Sum(n - 1);
	}
}

int main() {
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	int sum = Sum(n);

	printf("The sum of %d numbers is : %d", n, sum);

	return 0;
}
