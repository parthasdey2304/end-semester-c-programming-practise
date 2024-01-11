#include <stdio.h>

int main() {
    int m, n, c = 0;
    printf("Enter a number : ");
    scanf("%d", &m);
    n = m;

    while(m != 0) {
        c++;
        m /= 10;
    }

    printf("\nThe number of digits in the number %d is %d.", n, c);
    return 0;
}