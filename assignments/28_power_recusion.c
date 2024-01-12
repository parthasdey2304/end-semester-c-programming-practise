#include <stdio.h>

int factorial(int n) {
    return (n == 0)? 1 : factorial(n - 1) * n;
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The factorial of the number %d is : %d.\n", n, factorial(n));

    return 0;
}