#include <stdio.h>

int sum_of_n(int n) {
    if(n == 0) {
        return 0;
    }

    else {
        return n + sum_of_n(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The sum of %d natural numbers is : %d.\n", n, sum_of_n(n));
}