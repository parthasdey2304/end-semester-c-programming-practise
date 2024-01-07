#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char st[100], temp;
	int i, vowel = 0;

	printf("Enter a string : ");

	fgets(st, sizeof(st), stdin);

	for(i = 0; i < strlen(st) - 1; i++) {
		temp = tolower(st[i]);
		if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
			vowel++;
	}

	printf("The number of vowels in the string is : %d.\n", vowel);
	return 0;
}
