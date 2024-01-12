#include <stdio.h>

int gcd(int dividend, int divisor) { // this method returns the gcd of two numbers using recursion
    return (divisor == 0)? dividend : gcd(divisor, dividend%divisor);
}

int main() {
    int a, b, gcd_of_two;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    gcd_of_two = gcd(a, b);

    printf("\nThe GCD of %d and %d is %d.", a, b, gcd_of_two);
    return 0;
}