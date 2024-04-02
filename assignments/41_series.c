#include <stdio.h>

int main() {
    int n, i, series = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    printf("The series is : ");
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            series = series * 10 + 3;
        }
        else {
            series = series * 10 + 4;
        }

        printf("%d, ", series);
    }

    return 0;
}