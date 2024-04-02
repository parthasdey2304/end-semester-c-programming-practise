#include <stdio.h>
#include <math.h>

int main() {
    int base, power;

    printf("Enter the base of the number : ");
    scanf("%d", &base);
    printf("Enter the power of the number : ");
    scanf("%d", &power);

    printf("\nThe value of the number %d^%d is %d.", base, power, (int)pow(base, power));
    return 0;
}