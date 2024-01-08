#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int main() {
	char st[100], newst[100];
	int i;
	bool flag = true;

	printf("Enter a string : ");
	fgets(st, sizeof(st), stdin);

	for(i = 0; i < strlen(st) - 1; i++) {
		newst[strlen(st) - 2 - i] = st[i];
	}

	for(i = 0; i < strlen(st) - 1; i++) {
		if(st[i] != newst[i]) {
			flag = false;
		}
	}

	if(flag) {
		printf("Palindrome string");
	}

	else {
		printf("Not Palindrome string");
	}

	return 0;
}
