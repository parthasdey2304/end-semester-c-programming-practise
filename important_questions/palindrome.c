// This is the code to check if a number is palindrome number or not.
// 121 -> 121
#include <stdio.h>

int reverse(int n) {
    int rev = 0;

    while(n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

int main() {
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf((n == reverse(n))? "The number %d is a Palindrome.\n" : "The number %d is not a Palindrome.\n", n);
    return 0;
}