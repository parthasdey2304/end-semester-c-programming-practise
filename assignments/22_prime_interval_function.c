#include <stdio.h>
#include <stdbool.h>

bool primeCheck(int n) {
    int c = 0, i;

    for(i = 1; i <= n; i++) {
        c += (n % i == 0)? 1 : 0;
    }

    return c == 2;
}

int main() {
    int starting, ending, i;

    printf("Enter the starting number : ");
    scanf("%d", &starting);
    printf("Enter the ending number : ");
    scanf("%d", &ending);

    printf("The prime numbers between %d and %d are : ", starting, ending);
    for(i = starting; i <= ending; i++) {
        if(primeCheck(i)) {
            printf("%d, ", i);
        }
    }

    return 0;
}