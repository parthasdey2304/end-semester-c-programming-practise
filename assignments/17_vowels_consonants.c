#include <stdio.h>

int main() {
    char st[100], ch;
    int i, len = 0, vowels = 0;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        ch = st[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        len++;
    }

    len -= 1;

    printf("The number of vowels present in the string is : %d.\nThe number of consonants present in the string is : %d.", vowels, len - vowels);
    return 0;
}