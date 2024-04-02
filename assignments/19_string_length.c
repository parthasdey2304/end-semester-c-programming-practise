#include <stdio.h>

int main() {
    char st[100];
    int len = 0, i;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        len++;
    }

    len -= 1; // -1 because of the '\n' character at the end of the string needs to be ommited from the string

    printf("The length of the string is : %d.", len);

    return 0;
}