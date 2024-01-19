#include <stdio.h>

int main() {
    int n, reverse = 0, copy;

    printf("Enter a number : ");
    scanf("%d", &n); 
    copy = n; 

    while(n!= 0) { 
        reverse = reverse * 10 + n % 10; 
        n /= 10;
    }

    printf("The reverse of %d is %d.\n", copy, reverse);

    return 0;
}