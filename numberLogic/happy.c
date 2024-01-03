#include <stdio.h>
#include <math.h>

int main() {
        int n, sum = 0;
        printf("Enter a number : ");
        scanf("%d", &n);

        while(n > 7) {
                while(n != 0) {
                        sum += (int)pow(n % 10, 2);
                        n /= 10;
                }

                n = sum;
                sum = 0;
        }

        printf((n == 1)? "Happy number" : "Not Happy number");

        return 0;
}
