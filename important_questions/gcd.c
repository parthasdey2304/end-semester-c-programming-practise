#include <stdio.h>

int gcd(int dividend, int divisor) {
    if(divisor == 0) {
        return dividend;
    }
    else {
        return gcd(divisor, dividend % divisor);
    }
}

int main() {
    int a, b;

    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    if(b > a) { // swapping the values of a and b if b is greater than a
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("The sum of %d and %d is %d.\n", a, b, gcd(a, b));
}