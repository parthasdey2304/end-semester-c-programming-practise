#include <stdio.h>

int raise(int base, int power) {
	if(power == 0) {
		return 1;
	}

	else {
		return base * raise(base, power - 1);
	}
}

int main() {
	int base, power;

	printf("Enter a base : ");
	scanf("%d", &base);

	printf("Enter the powerof the number : ");
	scanf("%d", &power);

	int val = raise(base, power);

	printf("The number %d raised to the power %d is : %d", base, power, val);

	return 0;
}
