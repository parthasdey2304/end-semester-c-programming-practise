#include <stdio.h>

int main() {
    char st[100], copy[100];
    int i;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        if(st[i] != '\n') {
            copy[i] = st[i];
        }
    }

    printf("The new string after copying is : %s.", copy);
    return 0;
}