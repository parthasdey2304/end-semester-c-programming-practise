#include <stdio.h>

int main() {
    char i;
    printf("The alphabetical characters are : \n");

    for(i = 'a'; i <= 'z'; i++) {
        printf("%c, ", i);
    }

    return 0;
}