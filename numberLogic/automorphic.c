#include <stdio.h>
#include <math.h>

int main() {
	int n, double_n, n_length = 0, n_copy;
	printf("Enter a number : ");
	scanf("%d", &n);
	double_n = n * n;
	n_copy = n;

	while(n_copy != 0) {
		n_length++;
		n_copy /= 10;
	}

	printf((n == double_n%(int)pow(10, n_length))? "Automorphic number" : "Not Automorphic number");

	return 0;
}
