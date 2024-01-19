#include <stdio.h>

int power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent-1);
    }
}

int main() {
    int base, exponent, power_value;

    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);

    power_value = power(base, exponent);

    printf("The power of %d to the power of %d is %d.\n", base, exponent, power_value);
    return 0;
}