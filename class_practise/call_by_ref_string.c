#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char st[100], copy[100];
	int i;

	printf("Enter a string : ");
	fgets(st, sizeof(st), stdin);

	for(i = 0; st[i] != '\0'; i++) {
		copy[i] = st[i];
	}

	printf("The copied string is : %s", copy);

	return 0;
}
