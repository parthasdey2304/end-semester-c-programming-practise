#include <stdio.h>

int gcd(int dividend, int divisor) { // this method returns the gcd of two numbers using recursion
    if(divisor == 0) {
        return dividend;
    }
    else {
        return gcd(divisor, dividend%divisor);
    }
}

int main() {
    int a, b, lcm_of_two;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);

    lcm_of_two = (a * b)/gcd(a, b);

    printf("\nThe LCM of %d and %d is %d.", a, b, lcm_of_two);
    return 0;
}