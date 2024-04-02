#include <stdio.h>

int main() {
    int starting, ending, i, c;

    printf("Enter the starting number : ");
    scanf("%d", &starting);
    printf("Enter the ending number : ");
    scanf("%d", &ending);

    printf("\nThe prime numbers between %d and %d are : ", starting, ending);

    for(i = starting; i <= ending; i++) {
        c = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0) {
                c++;
            }
        }
        if(c == 2) {
            printf("%d, ", i);
        }
    }
    return 0;
}