#include <stdio.h>

int main() {
        int number = 123, sum = 0;

        while(number != 0) {
                sum += number % 10;
                number /= 10;
        }

        printf("The sum of the digits of the number is : %d", sum);

        return 0;
}
