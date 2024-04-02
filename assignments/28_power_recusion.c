#include <stdio.h>

int power(int base, int exponent) {
    return (exponent == 0)? 1 : power(base, exponent - 1) * base;
}

int main() {
    int base, exponent;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    printf("The number %d raised to the power %d is : %d.\n", base, exponent, power(base, exponent));

    return 0;
}