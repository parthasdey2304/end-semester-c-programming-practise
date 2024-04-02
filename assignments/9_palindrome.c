#include <stdio.h>

int main() {
    int n, copy, rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);
    copy = n;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    printf((copy == rev)? "\nThe number %d is a palindrome." : "\nThe number %d is not a palindrome.", copy);
    return 0;
}