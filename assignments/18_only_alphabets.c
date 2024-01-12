#include <stdio.h>

int main() {
    char st[100], newst[100];
    int i, a = 0;

    printf("Enter a string : ");
    fgets(st, sizeof(st), stdin);

    for(i = 0; st[i] != '\0'; i++) {
        if(st[i] >= 'a' && st[i] <= 'z') {
            newst[a] = st[i];
            a++;
        }

        if(st[i] >= 'A' && st[i] <= 'Z') {
            newst[a] = st[i];
            a++;
        }
    }

    printf("The new string after removing all the non alphabets is : %s", newst);

    return 0;
}