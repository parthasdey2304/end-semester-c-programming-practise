#include <stdio.h>

int primeCheck(int n) {
    int i, c = 0;

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
            c++;
        }
    }

    return c == 2;
}

int main() {
    int starting, ending, i;

    printf("Enter starting number : ");
    scanf("%d", &starting);
    printf("Enter ending number : ");
    scanf("%d", &ending);

    printf("All the prime numbers between %d and %d are : \n", starting, ending);

    for(i = starting; i <= ending; i++) {
        if(primeCheck(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}