#include <stdio.h>

int main() {
	int number = 53;

	if(number == 0) {
		printf("The number is zero.");
	}
	else if(number % 2 == 0) {
		printf("The number is even!");
	}
	else {
		printf("The number is odd!");
	}

	return 0;
}
