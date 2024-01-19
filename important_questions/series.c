#include <stdio.h>

int main() {
    int n, i, a = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            a = a * 10 + 3;
        }
        else {
            a = a * 10 + 4;
        }

        printf("%d, ", a);
    }

    return 0;
}