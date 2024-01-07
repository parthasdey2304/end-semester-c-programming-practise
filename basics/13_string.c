#include <stdio.h>
#include <string.h>

int main() {
	char st[100]; // string declaration

	printf("Enter a string : ");	
	fgets(st, sizeof(st), stdin); // taking a string input
	
	printf("The length of the string is : %d.\n", strlen(st) - 1);

	/*
	int length = 0;
	while(st[length] != '\0') {
		length++;
	}

	printf("Length : %d.\n", length);
	*/

	printf("The Characters of the string are : ");
	for(int i = 0; i < strlen(st) - 1; i++) {
		printf("%c, ", st[i]);
	}

	return 0;
}
