#include <stdio.h>

int main() {
	int n, flag = 0, i;
	printf("Enter a number : ");
	scanf("%d", &n);

	for(i = 1; i < n; i++) {
		if(i * (i + 1) == n) {
			flag = 1;
			break;
		}
	}

	printf((flag == 1)? "Pronic number" : "Not Pronic number");

	return 0;
}
