#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c = 0, i = 0;
    
    printf("Enter the number of terms in the fibonacci series : ");
    scanf("%d", &n);

    printf("The %d numbers of the fibonacci series is : \n0, 1, ");
    while((n-2) != i) {
        c = a + b;
        printf("%d, ", c);
        a = b;
        b = c;
        i++;
    }

    return 0;
}