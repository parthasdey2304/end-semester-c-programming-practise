#include <stdio.h>

int main() {
    int n, m, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf("\nThe reverse of the number %d is %d.", m, rev);
    return 0;
}