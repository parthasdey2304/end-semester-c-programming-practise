#include <stdio.h>
#include <string.h>

int main() {
	char st[50] = "Partha";
	char rev[50] = "";

	for(int i = 0; st[i] != '\0'; i++) {
		rev = st[i] + rev;
	}

	printf("The reverse of the string is : %s", rev);
	return 0;
}
