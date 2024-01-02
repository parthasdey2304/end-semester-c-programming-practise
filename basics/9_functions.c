#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a = 5, b = 3;
	int sum_of_numbers = sum(a, b);

	printf("The sum of the numbers %d and %d is : %d", a, b, sum_of_numbers);
	return 0;
}
