#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 0, n, i;

    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("\nThe terms of the fibonacci series upto %d are : 0, 1, ", n);

    for(i = 1; i <= n - 2; i++) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
    }

    return 0;
}