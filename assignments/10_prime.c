#include <stdio.h>

int main() {
    int n, c = 0, i;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }

    printf((c == 2)? "\nThe number %d is a prime number." : "\nThe number %d is not a prime number.", n);
    return 0;
}