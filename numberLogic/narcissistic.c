#include <stdio.h>
#include <math.h>

int main() {
        int n, copy, length = 0, n_copy, sum = 0;
        printf("Enter a number : ");
        scanf("%d", &n);
        copy = n;
        n_copy = n;

        while(n_copy != 0) {
                length++;
                n_copy /= 10;
        }

        while(n != 0) {
                sum += (int)pow(n % 10, length);
                n /= 10;
        }

        printf((sum == copy)? "Narcissistic number" : "Not Narcissistic number");

        return 0;
}
