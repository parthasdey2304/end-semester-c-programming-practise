#include <stdio.h>

int main() {
    char st[100];
    int len = 0, i;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        len++;
    }

    printf("The length of the string is : %d.", len - 1);

    return 0;
}