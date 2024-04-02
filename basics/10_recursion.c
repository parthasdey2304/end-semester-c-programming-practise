#include <stdio.h>

int factorial(int n) {
	return (n == 0)? 1 : n * factorial(n - 1);
}

int main() {
	int number = 5;
	int factorial_of_number = factorial(number);

	printf("The factorial of the number %d is : %d", number, factorial_of_number);
	return 0;
}
