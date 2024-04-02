#include <stdio.h>

int main() {
	double pi = 3.123124213113;
	float pi_f = (float)pi;
	int x = (int)pi;

	printf("%f %d", pi_f, x);
	return 0;
}
