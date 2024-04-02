#include <stdio.h>
#include <math.h>

int main() {
    int n, m, copy, sum = 0, len = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    m = n;
    copy = n;

    while(m != 0) {
        len++;
        m /= 10;
    }

    while(n != 0) {
        sum = sum + (int)pow((n % 10), len);
        n /= 10;
    }

    printf((copy == sum)? "\nThe number %d is an Armstrong number." : "\nThe number %d is not an Armstrong number.", copy);
    return 0;
}