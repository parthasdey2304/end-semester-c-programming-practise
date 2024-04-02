#include <stdio.h>
#include <string.h>

int main() {
	char st[100], rev[100];

	printf("Enter a string : ");

	fgets(st, sizeof(st), stdin);

	for(int i = 0; i < strlen(st) - 1; i++) {
		rev[strlen(st) - 2 - i] = st[i];
	}

	printf("The reverse of the string is : %s.\n", rev);
	return 0;
}
